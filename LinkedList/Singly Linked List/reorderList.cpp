#include<iostream>
#include<vector>
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
    void insertAtTail(int val){
        Node* new_node = new Node(val);
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
Node* reorderList(Node* &head){
    //Find the middle element
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //Now slow is pointing towards middle element
    //Separate the linked list and reverse the second half
    Node* curr = slow->next;
    slow->next = NULL;
    Node* prev = slow;
    while(curr){
        Node* nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }
    //Merging the two halves of the linked list
    Node* ptr1 = head; //linked list first half
    Node* ptr2 = prev; //linked list second half
    while(ptr1!=ptr2){
        Node* temp = ptr1->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
        ptr2 = temp;
    }
    return head;
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
    ll.head = reorderList(ll.head);
    ll.display();
    return 0;
}
//Time Complexity: O(n) where n is the number of nodes