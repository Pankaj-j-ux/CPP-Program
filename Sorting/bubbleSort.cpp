#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for (int i = 0; i < size-1; i++){
        
        for (int j = 0; j < size-i-1; j++){
            
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }    
        }
        
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
    bubbleSort(arr, size);

    for (int  i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
                                    OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 7

        ENTER THE INTERGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by space and Total values must be less than Size of Array.
        211 32 3 2 21 12 67 

        INPUTED ARRAY IN SORTED ORDER : 2 3 12 21 32 67 211

*/
