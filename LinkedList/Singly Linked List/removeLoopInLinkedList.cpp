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
bool linkedListCycle(Node* &head){
    if(head==NULL){
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void removeCycle(Node* &head){
    //assuming that the linked list has a cycle
    Node* slow = head;
    Node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    } while(slow!=fast);
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    // ll.display();
    ll.head->next->next->next->next->next->next->next = ll.head->next->next;
    cout<<linkedListCycle(ll.head)<<endl;
    removeCycle(ll.head);
    cout<<linkedListCycle(ll.head)<<endl;
    ll.display();
    return 0;
}
//Time Complexity: O(n) where n = number of nodes