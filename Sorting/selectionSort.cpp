#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
    
    for (int i = 0; i < size-1; i++){
        
        int minValue=i;
        for (int j = i+1; j < size; j++){       //         This Section Find the index of Minimum 
            if(arr[j] < arr[minValue]){         //         Values in Unsorted array. 
                minValue = j;
            }            
        }

        if(arr[minValue] != arr[i]){
            int temp = arr[i];
            arr[i] = arr[minValue];             //         This Section Swap the Minimum value to       
            arr[minValue] = temp;               //         the first Value of Unsorted Array.     
        }        
    }

    for (int i = 0; i < size; i++){             //         Printing sorted array.
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
    selectionSort(arr, size);    

    return 0;
}

/*
                                            OUTPUT

SET 1 :  ENTER THE SIZE OF ARRAY : 5

         ENTER THE INTERGER VALUES FOR ARRAY.
         NOTE : Values must be seperated by space and Total values must be less than Size of Array.
         5 4 3 2 1

         INPUTED ARRAY IN SORTED ORDER : 1 2 3 4 5

*/        