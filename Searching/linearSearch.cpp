#include <iostream>
using namespace std;

int linearSearch(int arr[], int key, int size){
    for (int i = 0; i < size; i++){
        if(arr[i]==key){
            return i;
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
    cout<<"NOTE : Different Values must be seperated by space and Total values must be less than Size of Array."<<endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<endl;
    cout<<"ENTER THE VALUE TO BE SEARCHED IN ARRAY : ";
    cin>>key;
    cout<<endl;

    if(linearSearch(arr, key, n)!=-1){
        cout<<"Value to be searched is present at index number : "<<linearSearch(arr, key, n)<<endl; 
    }else{
        cout<<"Value is not present in Array";
    }
    return 0;    
}

/*
                                    OUTPUT

SET 1 :     ENTER THE SIZE OF ARRAY : 6

            ENTER THE INTEGER VALUES FOR ARRAY
            NOTE : Different Values must be seperated by space and Total values must be less than Size of Array.
            10 20 30 40 50 60

            ENTER THE VALUE TO BE SEARCHED IN ARRAY : 60

            Value to be searched is present at index number : 5

      __________________________________****************_______________________________________      

SET 2 :     ENTER THE SIZE OF ARRAY : 5

            ENTER THE INTEGER VALUES FOR ARRAY
            NOTE : Different Values must be seperated by space and Total values must be less than Size of Array.
            10 20 30 40 50 

            ENTER THE VALUE TO BE SEARCHED IN ARRAY : 22

            Value is not present in Array
*/