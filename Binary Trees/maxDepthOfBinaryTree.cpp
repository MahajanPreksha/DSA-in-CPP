#include<iostream>
using namespace std;
class Node{
    public:
        int value;
        Node* left;
        Node* right;
        Node(int v){
            value = v;
            left = right = NULL;
        }
};
int depth(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftDepth = depth(root->left);
    int rightDepth = depth(root->right);
    return max(leftDepth, rightDepth) + 1;
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    cout<<depth(root);
    return 0;
}