#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int value;
    vector<Node*> children;
    Node(int data){
        value = data;
    }
};
void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    for(Node* child:root->children){
        preorderTraversal(child);
    }
    return;
}
void justGreaterNode(Node* root, int x, Node* &ans){
    if(root==NULL){
        return;
    }
    if(root->value>x && (ans==NULL || root->value<ans->value)){
        //update ans
        ans = root;
    }
    for(Node* child:root->children){
        justGreaterNode(child, x, ans);
    }
}
int main(){
    Node* root = new Node(20);
    root->children.push_back(new Node(8));
    root->children.push_back(new Node(22));
    root->children[0]->children.push_back(new Node(4));
    root->children[0]->children.push_back(new Node(12));
    root->children[0]->children[1]->children.push_back(new Node(10));
    root->children[0]->children[1]->children.push_back(new Node(14));
    preorderTraversal(root);
    int x = 10;
    Node* ans = NULL;
    justGreaterNode(root, x, ans);
    cout<<"Ans-";
    if(ans==NULL){
        cout<<"NULL"<<endl;
    }
    else{
        cout<<ans->value<<endl;
    }
    return 0;
}
//Time Complexity: O(N)
//Space Complexity: O(H)