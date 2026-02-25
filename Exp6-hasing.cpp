#include<iostream>
using namespace std;

int main(){

    int size;
    int key;
    int n;

    cout<<" Enter hashTable size :  ";
    cin>> size;
    int hashTable[size];

    for(int i=0; i<size; i++){
        hashTable[i] = -1;
    }

    cout<<" Enter how much key value u want : ";
    cin>>n; 

    for( int i=0; i<n; i++){
        
        cout<<" Enter key value:  ";
        cin>>key;
        
        int mod = key % size;
        while(hashTable[mod] != -1){
            mod = (mod + 1)% size;
        }
        hashTable[mod] = key;

    }

    cout<<"\n -- Hash Table -- \n"<<endl;

    for(int i=0; i<size; i++){

        cout<<"index : "<< i <<" --> "<< " value : " ;

        if(hashTable[i] == -1){
            cout<<"empty ";
        }
        else{
            cout<<hashTable[i];
        }
        cout<< endl;
    }


    return 0;
}