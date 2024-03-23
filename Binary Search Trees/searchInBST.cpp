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
bool searchInBST(Node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->value==key){
        return true;
    }
    if(root->value<key){
        return searchInBST(root->right, key);
    }
    if(root->value>key){
        return searchInBST(root->left, key);
    }
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
    insertIntoBST(bst1.root, 6);
    insertIntoBST(bst1.root, 2);
    cout<<searchInBST(bst1.root, 8)<<endl; //Print 0
    cout<<searchInBST(bst1.root, 1); //Print 1
    return 0;
}
//Time Complexity: O(log n) in average case
//Time Complexity: O(n) in worst case