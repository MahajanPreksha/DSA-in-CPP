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
void inorderPredecessorAndSuccessor(Node* root, Node* &pre, Node* &succ, int key){
    if(root==NULL){
        return;
    }
    if(root->value==key){
        //pre -> rightmost node in left subtree
        if(root->left!=NULL){
            Node* temp = root->left;
            while(temp->right!=NULL){
                temp = temp->right;
            }
            pre = temp;
        }
        //succ -> leftmost node in right subtree
        if(root->right!=NULL){
            Node* temp = root->right;
            while(temp->left!=NULL){
                temp = temp->left;
            }
            succ = temp;
        }
        return;
    }
    if(root->value>key){
        succ = root;
        inorderPredecessorAndSuccessor(root->left, pre, succ, key);
    }
    else if(root->value<key){
        pre = root;
        inorderPredecessorAndSuccessor(root->right, pre, succ, key);
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
    bst1.root = insertIntoBST(bst1.root, 3);
    insertIntoBST(bst1.root, 1);
    insertIntoBST(bst1.root, 4);
    insertIntoBST(bst1.root, 6);
    insertIntoBST(bst1.root, 2);
    Node* pre = NULL;
    Node* succ = NULL;
    inorderPredecessorAndSuccessor(bst1.root, pre, succ, 4);
    if(pre!=NULL){
        cout<<"pre: "<<pre->value<<endl;
    }
    else{
        cout<<"pre: NULL"<<endl;
    }
    if(succ!=NULL){
        cout<<"succ: "<<succ->value<<endl;
    }
    else{
        cout<<"succ: NULL"<<endl;
    }
    return 0;
}
//Inorder Predecessor = Just Smaller Value/Greatest Value smaller than key
//Inorder Successor = Just Greater Value/Smallest Value greater than key
//Time Complexity: O(h) where h = height of the BST
//Space Complexity: O(1)