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
void insertAtHead(Node* &head, int value){
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(Node* &head, int value){
    Node* new_node = new Node(value);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}
void insertAtPosition(Node* &head, int value, int pos){
    Node* new_node = new Node(value);
    if(pos==0){
        insertAtHead(head, value);
        return;
    }
    Node*  temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }
    //temp is pointing at pos-1
    new_node->next = temp->next;
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
    insertAtPosition(head, 2, 1);
    insertAtPosition(head, 3, 2);
    insertAtPosition(head, 4, 3);
    display(head);
    return 0;
}