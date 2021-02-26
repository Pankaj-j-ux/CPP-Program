#include <iostream>
using namespace std; 

void merge(int arr[], int l, int mid, int r){
    
    int n1 = mid-l+1;
    int n2 = r-mid;
    int A[n1], B[n2];

    for (int i = 0; i < n1; i++){
        A[i] = arr[l+i];
    }

    for (int i = 0; i < n2; i++){
        B[i] = arr[mid+1+i];
    }

    int i=0, j=0, k=l;   
    while( (i < n1) && (j < n2)){
        
        if(A[i] <= B[j]){
            arr[k++] = A[i++];
        } else {
            arr[k++] = B[j++];
        }
    }

    while((i < n1) || (j < n2)){
        if (i < n1){
            arr[k++] = A[i++];
        } else {
            arr[k++] = B[j++];
        }        
    }    
    
    return; 
}

void mergeSort(int arr[], int l, int r){

    if(l < r){

        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);

        merge(arr, l, mid, r);
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
    cout<<"NOTE: Values must be seperated by space and Total values must be less than Size of Array."<<endl;
    
    for (int i = 0; i < size; i++){
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"INPUTED ARRAY IN SORTED ORDER : ";
    mergeSort(arr, 0, size-1);

    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }    

    return 0;
}

/*
                            OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 8   

        ENTER THE INTERGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by space and Total values must be less than Size of Array.
        7 8 5 3 2 1 6 4

        INPUTED ARRAY IN SORTED ORDER : 1 2 3 4 5 6 7 8

*/
