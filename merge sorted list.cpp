/* Merge two sorted list 
in this code we merge two list name list 1 and list firstly create the insert function from which 
user insert the node in the list by value then by using mergesortedlist function we sort the list 
and insert the value in the third list which is mergelist and it initially empty 
then one by one compare the list 1 and list 2 values and insert the value in the third list 
in the end display the sorted list using display function  
*/ 
#include<iostream>
using namespace std;

class Node {
    int value;
    Node* next;
public:
    // Setter methods
    void setvalue(int value) {
        this->value = value;
    }
    void setnext(Node* next) {
        this->next = next;
    }
    
    // Getter methods
    int getvalue() {
        return value;
    }
    Node* getnext() {
        return next;
    }
};

class Linkedlist {
    Node* head;
    Node* current;
public:
    // Default constructor
    Linkedlist() {
        head = NULL;
        current = NULL;
    }

    // Insert value at the end of the list
    void insert(int value) {
        Node* newNode = new Node();
        newNode->setvalue(value);
        newNode->setnext(NULL);
        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->setnext(newNode);
            current = newNode;
        }
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->getvalue() << " ";
            temp = temp->getnext();
        }
        cout << endl;
    }

    // Merge two sorted linked lists into one sorted list
    static Linkedlist mergeSortedLists(Linkedlist& list1, Linkedlist& list2) {
        Linkedlist mergedList;
        Node* p1 = list1.head;
        Node* p2 = list2.head;
        
        // Merge the two lists while there are nodes in both
        while (p1 != NULL && p2 != NULL) {
            if (p1->getvalue() < p2->getvalue()) {
                mergedList.insert(p1->getvalue());
                p1 = p1->getnext();
            } else {
                mergedList.insert(p2->getvalue());
                p2 = p2->getnext();
            }
        }
        
        // Add remaining nodes from list1 or list2
        while (p1 != NULL) {
            mergedList.insert(p1->getvalue());
            p1 = p1->getnext();
        }
        
        while (p2 != NULL) {
            mergedList.insert(p2->getvalue());
            p2 = p2->getnext();
        }
        
        return mergedList;
    }
};

int main() {
    Linkedlist list1;
    list1.insert(1);
    list1.insert(3);
    list1.insert(5);
    
    Linkedlist list2;
    list2.insert(2);
    list2.insert(4);
    list2.insert(6);
    
    cout << "List 1: ";
    list1.display();
    
    cout << "List 2: ";
    list2.display();
    
    Linkedlist mergedList = Linkedlist::mergeSortedLists(list1, list2);
    cout << "Merged List: ";
    mergedList.display();

    return 0;
}

