#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int data)
    {
        value = data;
        left = right = NULL;
    }
};
class BST
{
public:
    Node *root;
    BST()
    {
        root = NULL;
    }
};
Node *insertIntoBST(Node *&root, int val)
{
    Node *new_node = new Node(val);
    if (root == NULL)
    { // If BST is empty
        root = new_node;
        return root;
    }
    // If BST in not empty
    Node *current = root;
    if (current->value > val)
    {
        current->left = insertIntoBST(current->left, val);
    }
    if (current->value < val)
    {
        current->right = insertIntoBST(current->right, val);
    }
    return current;
}
Node *largestNodeBST(Node *root)
{
    Node *curr = root;
    while (curr && curr->right != NULL)
    {
        curr = curr->right;
    }
    return curr;
}
Node *deleteInBST(Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->value < key)
    {
        root->right = deleteInBST(root->right, key);
    }
    else if (root->value > key)
    {
        root->left = deleteInBST(root->left, key);
    }
    else
    { // root is the node to be deleted
        if (root->left == NULL && root->right == NULL)
        { // node has 0 child nodes
            free(root);
            return NULL;
        }
        else if (root->left == NULL)
        { // node has 1 child
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }
        else
        { // node has 2 child nodes
            Node *justSmallerNode = largestNodeBST(root->left);
            root->value = justSmallerNode->value;
            root->left = deleteInBST(root->left, justSmallerNode->value);
        }
    }
    return root;
}
void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}
int main()
{
    BST bst1;
    insertIntoBST(bst1.root, 3);
    insertIntoBST(bst1.root, 1);
    insertIntoBST(bst1.root, 4);
    insertIntoBST(bst1.root, 6);
    insertIntoBST(bst1.root, 2);
    inorderTraversal(bst1.root);
    cout << endl;
    bst1.root = deleteInBST(bst1.root, 1);
    inorderTraversal(bst1.root);
    return 0;
}
// Time Complexity: O(log n) in average case
// Time Complexity: O(n) in worst case