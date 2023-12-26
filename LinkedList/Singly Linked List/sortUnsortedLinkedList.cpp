#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void insertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    Node *merge(Node *l1, Node *l2){
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1->val<l2->val){
            l1->next = merge(l1->next, l2);
            return l1;
        }
        else{
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }
    Node *mergeSort(Node *head){
        if (head==NULL || head->next==NULL){
            return head;
        }
        Node *slow = head;
        Node *fast = head->next;
        while(fast!=NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node *secondHalf = slow->next;
        slow->next = NULL;
        Node *sortedFirstHalf = mergeSort(head);
        Node *sortedSecondHalf = mergeSort(secondHalf);
        return merge(sortedFirstHalf, sortedSecondHalf);
    }
    void sort(){
        head = mergeSort(head);
    }
};
int main(){
    LinkedList list;
    list.insertAtEnd(3);
    list.insertAtEnd(1);
    list.insertAtEnd(4);
    list.insertAtEnd(2);
    list.insertAtEnd(5);
    cout<<"Unsorted List: ";
    list.display();
    list.sort();
    cout<<"Sorted List: ";
    list.display();
    return 0;
}