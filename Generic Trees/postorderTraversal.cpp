#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    char data;
    vector<Node*> children;
    Node(char data){
        this->data = data;
    }
};
void postorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    for(Node* child:root->children){
        postorderTraversal(child);
    }
    cout<<root->data<<" ";
}
int main(){
    Node* root = new Node('A');
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));
    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));
    root->children[2]->children.push_back(new Node('G'));
    postorderTraversal(root);
    return 0;
}