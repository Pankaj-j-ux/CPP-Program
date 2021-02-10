#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size){
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]>key){
            end=mid-1;
        }else if(arr[mid]<key){
            start=mid+1;    
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){

    int n;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>n;
    cout<<endl;

    int arr[n];
    cout<<"ENTER THE INTEGER VALUES FOR ARRAY"<<endl;
    cout<<"NOTE : Different Values must be seperated by space and Total values must be less than Size of Array, Also Values should be in sorted order"<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<endl;
    cout<<"ENTER THE VALUE TO BE SEARCHED IN ARRAY : ";
    cin>>key;
    cout<<endl;

    if(binarySearch(arr, key, n)!=-1){
        cout<<"Value to be searched is present at index number : "<<binarySearch(arr, key, n)<<endl; 
    }else{
        cout<<"Value is not present in Array";
    }
    
    return 0;
}

/*
                                    OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 6

        ENTER THE INTEGER VALUES FOR ARRAY
        NOTE : Different Values must be seperated by space and Total values must be less than Size of Array, Also Values should be in sorted order
        2 12 32 45 54 56

        ENTER THE VALUE TO BE SEARCHED IN ARRAY : 54

        Value to be searched is present at index number : 4

*/