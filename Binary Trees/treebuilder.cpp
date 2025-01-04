#include <iostream>
#include <queue>
#include <vector>
using namespace std;

//Node Structure for Binary Tree
class Node {
    public:
        int data;
        Node* left;
        Node* right;
        Node(int value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
};

//Function to insert nodes level by level from array
//Use this input when you don't have any -1 in your input
Node* build(int arr[], Node* root, int i, int n){
    if(i<n){
        Node* temp = new Node(arr[i]);
        root = temp;
        //Insert left child
        root->left = build(arr, root->left, 2*i+1, n);
        //Insert right child
        root->right = build(arr, root->right, 2*i+2, n);
    }
    return root;
}

//Function for inorder traversal of binary tree
void print(Node *r){
    if(r==nullptr)
        return;
    print(r->left);
    cout << r->data<<" ";
    print(r->right); 
    
}

//This is for level order traversal when your inputs have -1 in them
Node* buildTree(vector<int> &arr){
    int idx = 0;
    int n = arr.size();
    if(n==0){
        return NULL;
    }
    Node* root = new Node(arr[idx]);
    idx++;
    queue<Node*> q;
    q.push(root);
    while(!q.empty() && idx<n){
        Node* curr = q.front();
        q.pop();
        if(idx<n && arr[idx]!=-1){
            curr->left = new Node(arr[idx]);
            q.push(curr->left);
        }
        idx++;
        if(idx<n && arr[idx]!=-1){
            curr->right = new Node(arr[idx]);
            q.push(curr->right);
        }
        idx++;
    }
    return root;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    // Node *root = build(arr, nullptr, 0, n);
    Node* root = buildTree(arr);
    cout<<"In Order Traversal of Binary Tree:"<<endl;
    print(root);
    return 0;
}