#include<iostream>
using namespace std;



void Merge(int arr[], int low, int mid, int high){
    int temp[50];
    int k=0;
    int i= low;
    int j=mid+1;

    while (i <= mid && j <= high){
        if (arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }

    while ( i<= mid){
        temp[k++] = arr[i++];
    }

    while(j <= high){
        temp[k++] = arr[j++];
    }

    for(i=low, k=0; i<=high; i++,k++){
        arr[i] = temp[k];
    }
}

void MergeSort(int arr[], int low, int high){
    if (low < high){

    int mid = (low + high)/2;
    
    MergeSort(arr,low,mid);
    MergeSort(arr, mid+1, high);
    Merge(arr, low, mid, high);
    }
}

int main(){

    int choice;

 do{
    
        cout<< "\n\t-- MENU -- "<<endl;
        cout<< " 1. Insertion Sort " <<endl;
        cout<< " 2. Merge Sort "<<endl;
        cout<< " 3. Exit "<<endl;
        
        cout<<" Enter Your Choice : ";
        cin >> choice;

    switch(choice){

      case 1: 
      {  

        cout<<"\n Insertion Sort "<<endl;
        int n;
        cout << "Enter Number of Array List : ";
        cin>> n;

        int arr[n];
        cout<<"Enter elements : ";
        for (int i=0; i<n; i++){
            cin>> arr[i];
        }

        for (int i=1; i<n; i++){
        int key = arr[i];
        int j= i-1;

        while (j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        }

        cout<<" Sorted Array  :  ";
        for(int i=0 ; i<n; i++){
            cout << arr[i] << " ";
        }
        cout<< "\n";
         break;
    }
   

    case 2:
    {
        cout<<"\n Merge Sort "<<endl;
        int n;
        cout<< "Enter Number of Array List : ";
        cin>> n;

        int arr[n];
        cout<<" Enter elements : ";
        for(int i=0; i<n; i++){
            cin>> arr[i] ;
        }

        MergeSort(arr, 0 , n-1);

        cout<<"Sorted Array : ";
        for(int i=0; i<n; i++){
            cout << arr[i] <<" ";
        }
        cout<<"\n";
        break;
    }
   


    case 3: 
        cout<< "Existing Program..!"<<endl;
        cout<<"\n";
    break;
    
    default: 
        cout<<" Invalid choice..Try Again"<<endl;;
} 
}while( choice != 3);

    return 0;
}