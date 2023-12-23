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
Node* middle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
bool isPalindrome(Node* head){
    //Find middle element
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    //Now slow is pointing to middle element
    //Break/Separate linked list into two
    Node* curr = slow->next;
    Node* prev = slow;
    slow->next = NULL;
    //Reverse second half of the linked list
    while(curr){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    //Compare the 2 parts of the linked list
    Node* head1 = head;
    Node* head2 = prev;
    while(head2){
        if(head1->value!=head2->value){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();
    cout<<isPalindrome(ll.head)<<endl;
    return 0;
}