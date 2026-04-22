#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

// Insert at Beginning
void insertAtBeginning() {
    int value;
    cout << "Enter value to insert at beginning: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL) {
        head->prev = newNode;
    }

    head = newNode;

    cout << "Node inserted at beginning.\n";
}

// Insert at End
void insertAtEnd() {
    int value;
    cout << "Enter value to insert at end: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    cout << "Node inserted at end.\n";
}

// Delete from Beginning
void deleteFromBeginning() {
    if(head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;

    if(head != NULL) {
        head->prev = NULL;
    }

    cout << "Deleted node: " << temp->data << endl;
    delete temp;
}

// Delete from End
void deleteFromEnd() {
    if(head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    while(temp->next != NULL) {
        temp = temp->next;
    }

    if(temp->prev != NULL) {
        temp->prev->next = NULL;
    }
    else {
        head = NULL;
    }

    cout << "Deleted node: " << temp->data << endl;
    delete temp;
}

// Display List
void display() {
    if(head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    cout << "Doubly Linked List:\n";

    while(temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

// Main Function
int main() {
    int choice;

    do {
        cout << "\n===== DOUBLY LINKED LIST =====\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete from Beginning\n";
        cout << "4. Delete from End\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                insertAtBeginning();
                break;

            case 2:
                insertAtEnd();
                break;

            case 3:
                deleteFromBeginning();
                break;

            case 4:
                deleteFromEnd();
                break;

            case 5:
                display();
                break;

            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 6);

    return 0;
}