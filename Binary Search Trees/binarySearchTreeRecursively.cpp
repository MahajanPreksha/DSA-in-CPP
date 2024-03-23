#include <iostream>
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
class BST{
    public:
    Node* root;
    BST(){
        root = NULL;
    }
};
Node* insertIntoBST(Node* &root, int val){
    Node* new_node = new Node(val);
    if(root==NULL){ //If BST is empty
        root = new_node;
        return root;
    }
    //If BST in not empty
    Node* current = root;
    if(current->value>val){
        current->left = insertIntoBST(current->left, val);
    }
    if(current->value<val){
        current->right = insertIntoBST(current->right, val);
    }
    return current;
}
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->value<<" ";
    inorderTraversal(root->right);
}
int main(){
    BST bst1;
    insertIntoBST(bst1.root, 3);
    insertIntoBST(bst1.root, 1);
    insertIntoBST(bst1.root, 4);
    inorderTraversal(bst1.root);
    return 0;
}