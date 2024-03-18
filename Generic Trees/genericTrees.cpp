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
int main(){
    Node* root = new Node('A');
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    cout<<root->data<<endl;
    cout<<"Printing child nodes of A: ";
    for(Node* child:root->children){
        cout<<child->data<<" ";
    }
    cout<<endl;
    return 0;
}