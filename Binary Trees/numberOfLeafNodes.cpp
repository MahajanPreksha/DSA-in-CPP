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
int leafNodes(Node* root){
    //Base Case
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1; //Leaf Node
    }
    //Recursive Case
    int leftSubtreeLeafNodes = leafNodes(root->left);
    int rightSubtreeLeafNodes = leafNodes(root->right);
    return leftSubtreeLeafNodes + rightSubtreeLeafNodes;
}
int main(){
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    cout<<"Number of leaf nodes = "<<leafNodes(root)<<endl;
    return 0;
}