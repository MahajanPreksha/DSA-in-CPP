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
void insertAtPos(Node* &head, int value, int pos){
    Node* new_node = new Node(value);
    if(pos==0){
        insertAtHead(head, value);
        return;
    }
    Node *temp = head;
    int curr_pos = 0;
    while(curr_pos!=pos-1){
        temp = temp->next;
        curr_pos++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}
void updateAtPosition(Node* &head, int k, int value){
    Node* temp = head;
    int currPos = 0;
    while(currPos!=k){
        temp = temp->next;
        currPos++;
    }
    temp->val = value;
}
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}
void deleteAtEnd(Node* &head){
    Node* secondLast = head;
    while(secondLast->next->next!=NULL){
        secondLast = secondLast->next;
    }
    //secondLast points to second last node
    Node* temp = secondLast->next; //node to be deleted
    secondLast->next = NULL;
    free(temp);
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
    insertAtPos(head, 2, 1);
    insertAtPos(head, 3, 2);
    insertAtPos(head, 4, 3);
    insertAtPos(head, 5, 4);
    display(head);
    deleteAtEnd(head);
    display(head);
    return 0;
}