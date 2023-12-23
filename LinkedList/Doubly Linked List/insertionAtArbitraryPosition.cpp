#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* prev;
    Node* next;
    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
    void insertAtEnd(int val){
        Node* new_node = new Node(val);
        if(tail==NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }
    void insertAtKthPosition(int val, int k){
        Node* new_node = new Node(val);
        //assuming k is less than or equal to length of doubly linked list
        Node* temp = head;
        int count = 1; //1 based indexing
        while(count<(k-1)){
            temp = temp->next;
            count++;
        }
        //temp will be pointing to the node at (k-1)th position
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next->prev = new_node;
        return;
    }
};
int main(){
    DoublyLinkedList dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.display();
    dll.insertAtKthPosition(4, 3);
    dll.display();
    return 0;
}