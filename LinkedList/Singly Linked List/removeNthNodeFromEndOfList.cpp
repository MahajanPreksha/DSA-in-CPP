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
//assuming k is always less than length of linked list
void removeNthFromEnd(Node* &head, int n){
    Node* ptr1 = head;
    Node* ptr2 = head;
    //move ptr2 by k steps ahead
    int count = n;
    while(count--){
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){ //k is equal to the length of the linked list
        //we have to delete head node
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }
    //ptr2 is k steps ahead of ptr1
    //when ptr2 is at NULL (end of the list), ptr1 will be at the node to be deleted
    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    //now ptr1 is pointing to the node before the kth node from end
    Node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();
    removeNthFromEnd(ll.head, 3);
    ll.display();
    return 0;
}