#include<iostream>
#include<vector>
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
vector<int> rightView(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel){
            Node* currNode = q.front();
            q.pop();
            if(nodesAtCurrentLevel==1){
                ans.push_back(currNode->value);
            }
            if(currNode->left){
                q.push(currNode->left);
            }
            if(currNode->right){
                q.push(currNode->right);
            }
            nodesAtCurrentLevel--;
        }
    }
    return ans;
}
int main(){
    Node *root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    vector<int> ans = rightView(root);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}