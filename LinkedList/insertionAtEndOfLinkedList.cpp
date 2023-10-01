#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};
void insertAtTail(Node* &head, int value){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    //temp has reached the last node
    temp->next = new_node;
}
void display(Node* head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = new Node(1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    return 0;
}