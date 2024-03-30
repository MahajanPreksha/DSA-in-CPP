#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
class Node{
    public:
    int value;
    vector<Node*> children;
    Node(int data){
        value = data;
    }
};
void levelorderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int currentLevelNodes = q.size();
        while(currentLevelNodes--){
            //dequeue
            Node* curr = q.front();
            q.pop();
            cout<<curr->value<<" ";
            //enqueue all child nodes
            for(Node* child:curr->children){
                q.push(child);
            }
        }
        cout<<endl;
    }
}
void mirrorTree(Node* root){
    if(root==NULL){
        return;
    }
    if(root->children.size()<2){
        return;
    }
    reverse(root->children.begin(), root->children.end());
    for(Node* child:root->children){
        mirrorTree(child);
    }
}
int main(){
    Node* root = new Node(10);
    root->children.push_back(new Node(2));
    root->children.push_back(new Node(34));
    root->children.push_back(new Node(56));
    root->children.push_back(new Node(100));
    root->children[1]->children.push_back(new Node(1));
    root->children[3]->children.push_back(new Node(7));
    root->children[3]->children.push_back(new Node(8));
    root->children[3]->children.push_back(new Node(9));
    levelorderTraversal(root);
    mirrorTree(root);
    levelorderTraversal(root);
    return 0;
}
//Time Complexity: O(N)
//Space Complexity: O(H) + O(M) where M = max. number of nodes at a level