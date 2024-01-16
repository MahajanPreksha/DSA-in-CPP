#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class Queue{
    private:
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(){
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }
    void enqueue(int data){
        Node* new_node = new Node(data);
        if(this->head==NULL){ //Linked List is empty
            this->head = this->tail = new_node;
        }
        else{
            this->tail->next = new_node;
            this->tail = new_node;
        }
        this->size++;
    }
    void dequeue(){
        if(this->head==NULL){ //Linked List is empty
            return;
        }
        else{
            Node* old_head = this->head;
            Node* new_head = this->head->next;
            this->head = new_head;
            if(this->head==NULL){
                this->tail = NULL;
            }
            old_head->next = NULL;
            delete old_head;
        }
    }
    int getSize(){
        return this->size;
    }
    bool isEmpty(){
        return this->head==NULL;
    }
    int getFront(){
        if(this->head==NULL){
            return -1;
        }
        return this->head->data;
    }
};
int main(){
    Queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.dequeue();
    q1.enqueue(40);
    while(!q1.isEmpty()){
        cout<<q1.getFront()<<" ";
        q1.dequeue();
    }
    return 0;
}