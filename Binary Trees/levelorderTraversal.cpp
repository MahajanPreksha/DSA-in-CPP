#include<iostream>
#include<queue>
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

void levelorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel--){
            Node* currNode = q.front();
            q.pop();
            cout<<currNode->value<<" ";
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
        }
        cout<<endl;
    }
}

int main(){
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    levelorderTraversal(root);
    return 0;
}