#include <iostream>
using namespace std;

void maxTillJ(int arr[], int size){

    int mx = INT_MIN;
    for (int j = 0; j < size; j++){
        
        mx=max(mx, arr[j]);
        cout<<"Maximum till "<<j<<"th index : "<<mx<<endl;
    }

    return;
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
    cout<<"List of Maximum Value till Jth index is as Follows"<<endl;    
    maxTillJ(arr, size);

    return 0;
}

/*
                                        OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 5

        ENTER THE INTEGER VALUES FOR ARRAY.
        NOTE : Values must be seperated by usnig atlest one space.
        21 23 443 66 -1 

        List of Maximum Value till Jth index is as Follows
        Maximum till 0th index : 21
        Maximum till 1th index : 23
        Maximum till 2th index : 443
        Maximum till 3th index : 443
        Maximum till 4th index : 443

*/
