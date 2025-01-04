#include<iostream>
using namespace std;

class Node{
    public:
        int value;
        Node* left;
        Node* right;
        Node(int data){
            value = data;
            left = right = NULL;
        }
};

void postorderTraversal(Node* root){
    //Base Case
    if(root==NULL){
        return;
    }

    //Recursive call
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->value<<" ";
}

int main(){
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    postorderTraversal(root);
    return 0;
}