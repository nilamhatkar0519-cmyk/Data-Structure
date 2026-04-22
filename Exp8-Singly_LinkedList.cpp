#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

Node* top = NULL; // Top of stack

// PUSH Operation (Insertion)
void push() {
    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;

    cout << "Element inserted successfully.\n";
}

// POP Operation (Deletion)
void pop() {
    if(top == NULL) {
        cout << "Stack Underflow! No element to delete.\n";
        return;
    }

    Node* temp = top;
    cout << "Deleted element: " << temp->data << endl;

    top = top->next;
    delete temp;
}

// DISPLAY Operation
void display() {
    if(top == NULL) {
        cout << "Stack is empty.\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements:\n";

    while(temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n===== STACK USING LINKED LIST =====\n";
        cout << "1. insertion\n";
        cout << "2. Deletion\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 4);

    return 0;
}