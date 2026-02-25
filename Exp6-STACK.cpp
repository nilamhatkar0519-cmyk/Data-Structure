#include<bits/stdc++.h>
using namespace std;


int maxSTK = 5;
int st[5];
int TOP = -1;
int items;

void push(){
  
        if( TOP == maxSTK-1){
            cout<<" STACK OVERFLOW ..!"<<endl;
        }
        else{
            cout<< " Enter items to push : ";
            cin>> items;

            TOP +=1;
            st[TOP] = items;
            cout<< " \n pushed item : " <<items<<endl;

        }

}

void pop(){

    if( TOP == -1){
        cout<<" STACK UNDERFLOW ..!"<<endl;
    }
    else{
        cout<< " \n popped : "<<st[TOP]<<endl;
        TOP -=1;
    }

}

void display(){
    if(TOP == -1){
        cout << "STACK IS EMPTY..!"<<endl;
    }
    else{
        cout << "Stack elements are:  ";
        for(int i = TOP; i >= 0; i--){
            cout << st[i] << endl;
        }
    }
}
    

int main(){

    int choice;

    do{
        cout << "\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit \n";
        cout << "\n Enter choice:  ";
        cin >> choice;

        switch(choice){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: cout << "Exiting STACK ...\n"; break;
            default: cout << "Invalid choice\n";
        }

    }while(choice != 4);

    return 0;
}