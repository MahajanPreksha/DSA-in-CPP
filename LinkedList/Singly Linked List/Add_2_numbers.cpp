#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int data) {
        val = data;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }

  
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


    LinkedList addLists(LinkedList l1, LinkedList l2) {
        LinkedList result;
        Node* p = l1.head;
        Node* q = l2.head;
        int carry = 0;

        while (p != NULL || q != NULL) {
            int x = (p != NULL) ? p->val : 0;
            int y = (q != NULL) ? q->val : 0;
            int sum = x + y + carry;

            carry = sum / 10;
            result.insertAtEnd(sum % 10);

            if (p != NULL) p = p->next;
            if (q != NULL) q = q->next;
        }

        if (carry > 0) {
            result.insertAtEnd(carry);
        }

        return result;
    }

   
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
};

int main() {
  
    LinkedList list1, list2;
    list1.insertAtEnd(3);
    list1.insertAtEnd(2);
    list1.insertAtEnd(1);

    list2.insertAtEnd(6);
    list2.insertAtEnd(5);
    list2.insertAtEnd(4);


    cout << "List 1: ";
    list1.display();
    cout << "List 2: ";
    list2.display();


    LinkedList result = list1.addLists(list1, list2);

    
    cout << "Sum: ";
    result.display();

    return 0;
}
