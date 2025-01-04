#include<iostream>
#include<vector>
#include<queue>
#include<stack>
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
vector<int> levelorderReverseTraversal(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*> q;
    stack<Node*> s;
    q.push(root);
    while(!q.empty()){
        int nodesAtCurrentLevel = q.size();
        while(nodesAtCurrentLevel--){
            Node* currNode = q.front();
            q.pop();
            s.push(currNode);
            if(currNode->right){
                q.push(currNode->right);
            }
            if(currNode->left){
                q.push(currNode->left);
            }
        }
    }
    while(!s.empty()){
        ans.push_back(s.top()->value);
        s.pop();
    }
    return ans;
}

int main(){
    Node* root = new Node(2);
    root->left = new Node(4);
    root->right = new Node(10);
    root->left->left = new Node(6);
    root->left->right = new Node(5);
    root->right->right = new Node(11);
    vector<int> ans = levelorderReverseTraversal(root);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}