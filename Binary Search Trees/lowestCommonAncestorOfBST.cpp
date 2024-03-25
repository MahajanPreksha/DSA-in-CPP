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
Node* LCA(Node* root, Node* n1, Node* n2){
    //base case
    if(root==NULL){
        return root;
    }
    if(root->value>n1->value && root->value>n2->value){
        //LCA will lie in left subtree
        return LCA(root->left, n1, n2);
    }
    if(root->value<n1->value && root->value<n2->value){
        //LCA will lie in right subtree
        return LCA(root->right, n1, n2);
    }
    //if root value lies between n1 and n2 values or if root value if equal to any one of the node values
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
int main(){
    BST bst1;
    bst1.root = insertIntoBST(bst1.root, 3);
    insertIntoBST(bst1.root, 1);
    insertIntoBST(bst1.root, 4);
    insertIntoBST(bst1.root, 6);
    insertIntoBST(bst1.root, 2);
    Node* n1 = new Node(2);
    Node* n2 = new Node(6);
    Node* temp = LCA(bst1.root, n1, n2);
    cout<<temp->value<<endl;
    return 0;
}
//Lowest Common Ancestor (LCA) is the shared ancestor farthest from the root node.
//Every node is its own ancestor.
//Time Complexity: O(n) where n = number of elements in array
//Space Complexity: O(log n)