#include<iostream>
#include<vector>
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
Node* sortedArrayToBST(vector<int> v, int start, int end){
    //base case
    if(start>end){
        return NULL;
    }
    int mid = (start + end)/2;
    Node* root = new Node(v[mid]);
    //recursive case
    root->left = sortedArrayToBST(v, start, mid-1); //recursively creating left subtree from left half of the array
    root->right = sortedArrayToBST(v, mid+1, end); //recursively creating right subtree from right half of the array
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
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    BST bst;
    bst.root = sortedArrayToBST(v, 0, n-1);
    preorderTraversal(bst.root);
    return 0;
}
//Time Complexity: O(n) where n = number of elements in array
//Space Complexity: O(log n)