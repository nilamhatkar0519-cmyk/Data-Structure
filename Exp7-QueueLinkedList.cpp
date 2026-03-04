#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void insertQueue(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(front == NULL){
        front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }
    cout<<"Inserted Successfully\n";
}

void deleteQueue(){
    if(front == NULL){
        cout<<"Queue is Empty\n";
    }
    else{
        Node* temp = front;
        cout<<"Deleted: "<<temp->data<<endl;
        front = front->next;
        delete temp;
    }
}

void displayQueue(){
    if(front == NULL){
        cout<<"Queue is Empty\n";
    }
    else{
        cout<<"Queue Elements: ";
        Node* temp = front;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main(){
    int choice, value;

    do{
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value: ";
                cin>>value;
                insertQueue(value);
                break;

            case 2:
                deleteQueue();
                break;

            case 3:
                displayQueue();
                break;

            case 4:
                cout<<"Exiting...\n";
                break;

            default:
                cout<<"Invalid Choice\n";
        }
    }while(choice != 4);

    return 0;
}