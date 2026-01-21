#include<iostream>
using namespace std;

int main(){

    int n=10;
    int key;
    int arr[]={ 10,45,67,73,21,49,5,19,8,44};
    bool found = false;


    //sort the list 

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"sorted list is : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }

    int low =0; int high= n-1;

    cout<<"Enter number to binary search : "<<endl;
    cin>>key;
    
    while(low <= high){
        int mid = (low + high )/2 ;
        if(arr[mid] == key){
            cout<<"element found at index : "<<mid<<endl;
            found = true;
            break;
        }
        else if(key < arr[mid]){
                high= mid-1;
            }
        else{
            low= mid+1;
        }
    }

    if(!found){
        cout<<"element is not present in the list"<<endl;
    }
  return 0;
    }



  
