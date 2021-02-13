#include <iostream>
using namespace std;

int sumOfAllSubarrays(int arr[], int size){

    int totalSum=0,subarraySum=0;

    for (int i = 0; i < size; i++){
        
        for (int j = i; j < size; j++){

            subarraySum = subarraySum + arr[j];
            totalSum = totalSum + subarraySum;
        }

        subarraySum=0;          
    
    }    

    return totalSum;
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
    cout<<"Total Sum of Individual sums of each Subarrays of above Array is : ";    
    cout<<sumOfAllSubarrays(arr, size);

    return 0;
}

/*
                                        OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 5

        ENTER THE INTEGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by usnig atlest one space.
        1 2 0 7 2

        Total Sum of Individual sums of each Subarrays of above Array is : 87

SET 2 : ENTER THE SIZE OF ARRAY : 3

        ENTER THE INTEGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by usnig atlest one space.
        1 2 3

        Total Sum of Individual sums of each Subarrays of above Array is : 20

*/        