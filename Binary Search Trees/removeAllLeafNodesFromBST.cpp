#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int val){
        value = val;
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
Node* removeLeafNodes(Node* root){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL; //When root is a leaf node
    }
    //recursive case
    root->left = removeLeafNodes(root->left);
    root->right = removeLeafNodes(root->right);
    return root;
}
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
void preorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->value<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
int main(){
    BST bst1;
    bst1.root = insertIntoBST(bst1.root, 4);
    insertIntoBST(bst1.root, 2);
    insertIntoBST(bst1.root, 6);
    insertIntoBST(bst1.root, 1);
    insertIntoBST(bst1.root, 3);
    insertIntoBST(bst1.root, 5);
    insertIntoBST(bst1.root, 7);
    removeLeafNodes(bst1.root);
    preorderTraversal(bst1.root);
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(h) where h = height of the tree