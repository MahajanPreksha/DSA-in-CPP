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
void insertIntoBST(Node* &root, int val){
    Node* new_node = new Node(val);
    if(root==NULL){ //If BST is empty
        root = new_node;
        return;
    }
    //If BST in not empty
    Node* current = root;
    while(true){
        if(current->value>val){
            if(current->left==NULL){
                current->left = new_node;
                return;
            }
            current = current->left;
        }
        else{
            if(current->right==NULL){
                current->right = new_node;
                return;
            }
            current = current->right;
        }
    }
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