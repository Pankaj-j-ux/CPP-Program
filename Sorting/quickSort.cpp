#include <iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int partition(int arr[], int l, int r){

    int pvoit = arr[r];
    int i = l-1;
    
    for (int j = l; j < r; j++){
        
        if( arr[j] < pvoit){
            i++;
            swap(arr, i, j);                       
        }
    }

    swap(arr, i+1, r);

    return i+1;    
}


void quickSort(int arr[], int l, int r){

    if(l < r){
        
        int pi = partition(arr, l, r);

        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1, r);

    }

    return ; 
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
    quickSort(arr, 0, size-1);

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}

/*

                                    OUTPUT 

SET 1 : ENTER THE SIZE OF ARRAY : 7

        ENTER THE INTERGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by space and Total values must be less than Size of Array.
        6 3 9 5 2 8 7

        INPUTED ARRAY IN SORTED ORDER : 2 3 5 6 7 8 9

SET 2 : ENTER THE SIZE OF ARRAY : 8   

        ENTER THE INTERGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by space and Total values must be less than Size of Array.
        7 8 5 3 2 1 6 4

        INPUTED ARRAY IN SORTED ORDER : 1 2 3 4 5 6 7 8

*/