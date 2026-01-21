//linear searching 3

#include<iostream>
using namespace std;

int main(){

    int n=10;
    int key;
    int arr[] = { 19,5,20,55,87,90,32,1,2,33};
    bool found = false;

    cout<<"Enter number to search : "<<endl;
    cin>>key;

    for(int i=0; i<n; i++){
        
        if(arr[i] == key){
       
        cout<<"element found at index "<<i<<endl;
        found = true;
        break;
        }
    }

    if(!found){
        cout<<"element is not in th list"<<endl;
    }

    return 0 ;
}