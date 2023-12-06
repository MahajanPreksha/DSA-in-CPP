#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int data){
        value = data;
        next = NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head==NULL){
            head = new_node;
            return;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
void removeDuplicates(Node* &head){
    Node* curr = head;
    while(curr){
        while(curr->next && curr->value==curr->next->value){
            Node* temp = curr->next; //node to be deleted
            temp = curr->next; //delete curr->next
            curr->next = curr->next->next;
            free(temp);
        }
        //this loop ends when current node and next node vales are different
        //or linkedlist ends
        curr = curr->next;
    }
}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.display();
    removeDuplicates(ll.head);
    ll.display();
    return 0;
}

//Time Complexity: O(n)