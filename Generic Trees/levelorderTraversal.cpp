#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    char data;
    vector<Node*> children;
    Node(char data){
        this->data = data;
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
            cout<<curr->data<<" ";
            //enqueue all child nodes
            for(Node* child:curr->children){
                q.push(child);
            }
        }
        cout<<endl;
    }
}
int main(){
    Node* root = new Node('A');
    root->children.push_back(new Node('B'));
    root->children.push_back(new Node('C'));
    root->children.push_back(new Node('D'));
    root->children[0]->children.push_back(new Node('E'));
    root->children[0]->children.push_back(new Node('F'));
    root->children[2]->children.push_back(new Node('G'));
    levelorderTraversal(root);
    return 0;
}