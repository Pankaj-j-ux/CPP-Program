#include <iostream>
using namespace std;

int longestAirthmeticSubarray(int arr[], int size){

    int length=2, currLength=2, preDiff = arr[0]-arr[1];
    
    for (int i = 1; i < size-1; i++){

        if(preDiff == (arr[i]-arr[i+1])){
            currLength++;
            length = max(length, currLength);
        }else{
            currLength=2;
            preDiff = arr[i]-arr[i+1];
        }

    }

    return length;
}

int main(){

    int size;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>size;
    cout<<endl;

    int arr[size];
    cout<<"ENTER THE INTEGER VALUES FOR ARRAY."<<endl;
    cout<<"NOTE : Values must be seperated by usnig atlest one space."<<endl;
    
    for (int j = 0; j < size; j++){
        cin>>arr[j];
    }

    cout<<endl;  
    cout<<"The Length of Longest Airthmetic Subarrays of above Array is : ";    
    cout<<longestAirthmeticSubarray(arr, size);

    return 0;

}

/*
                                        OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 7

        ENTER THE INTEGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by usnig atlest one space.
        10 7 4 6 8 10 11

        The Length of Longest Airthmetic Subarrays of above Array is : 4

*/        