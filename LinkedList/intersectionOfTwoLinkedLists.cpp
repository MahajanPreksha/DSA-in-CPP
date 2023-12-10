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
int getLength(Node* head){
    Node* temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
Node* moveHeadbyK(Node* head, int k){
    Node* ptr = head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}
Node* intersect(Node* headA, Node* headB){
    Node* ptr1 = headA;
    Node* ptr2 = headB;
    //calculate lengths of both linked lists
    int l1 = getLength(headA);
    int l2 = getLength(headB);
    //find difference between linked lists and move longer linked list ptr by k steps
    if(l1>l2){ //LL1 is longer
        int k = l1 - l2;
        ptr1 = moveHeadbyK(headA, k);
        ptr2 = headB;
    }
    else{ //LL2 is longer
        int k = l2 - l1;
        ptr1 = headA;
        ptr2 = moveHeadbyK(headB, k);
    }
    //compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
}
int main(){
    LinkedList ll1;
    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display();
    LinkedList ll2;
    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.head->next->next = ll1.head->next->next->next;
    ll2.display();
    Node* intersection = intersect(ll1.head, ll2.head);
    if(intersection){
        cout<<intersection->value<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}