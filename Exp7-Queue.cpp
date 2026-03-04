#include<iostream>
using namespace std;

const int size = 5;
int queue[size];
int front = -1, rear = -1;

void insertQueue(int value){
    if(rear == size-1){
        cout<<" QUEUE is Full..!!"<<endl;
    }else{
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;
        cout<< "inserted value:  "<<value<<endl;
    }
}

void deleteQueue(){
    if(front == -1 || front > rear){
        cout<<"QUEUE is Empty..!!"<<endl;
    }else{
        cout<<" Deleted :  "<<queue[front]<<endl;
        front++;
    }
}

void displayQueue(){
    if(front == -1 || front > rear){
        cout<<"Queue is Empty\n";
    }
    else{
        cout<<"Queue Elements: ";
        for(int i = front; i <= rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int choice, value;

    do{
        cout<<"\n1.insertQueue \n2.deleteQueue \n3.displayQueue\n4.Exit\n";

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