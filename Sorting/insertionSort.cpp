#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){

    for (int i = 1; i < size; i++){
        
        int j = i-1;
        while(j >= 0){

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                j--;
                continue;
            }

            break;       
        }      
    }

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    return;
}

int main(){

    int size;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>size;
    cout<<endl;

    int arr[size];
    cout<<"ENTER THE INTERGER VALUES FOR ARRAY."<<endl;
    cout<<"NOTE : Values must be seperated by space and Total values must be less than Size of Array."<<endl;
    
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"INPUTED ARRAY IN SORTED ORDER : ";
    insertionSort(arr, size);

    return 0;
}

/*
                                        OUTPUT

SET 1 :     ENTER THE SIZE OF ARRAY : 5

            ENTER THE INTERGER VALUES FOR ARRAY.
            NOTE : Values must be seperated by space and Total values must be less than Size of Array.
            43 35 21 43 1 

            INPUTED ARRAY IN SORTED ORDER : 1 21 35 43 43                                        

*/