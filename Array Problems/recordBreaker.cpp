/*
    Isyana is given the number of visitors at her local theme park on N consecutive
    days. The number of visitors on the i-th day is Vi. A day is record breaking if it
    satisfies both of the following conditions:
    
    ● The number of visitors on the day is strictly larger than the number of
    visitors on each of the previous days.
    ● Either it is the last day, or the number of visitors on the day is strictly larger
    than the number of visitors on the following day.

    Note that the very first day could be a record breaking day!
    Please help Isyana find out the number of record breaking days.
*/

#include <iostream>
using namespace std;

int recordBreaker(int arr[], int size){

    int rcdBreDays = 0,preMaxVisitor = arr[0];
    

    for (int i = 0; i < size; i++){
        
        if(i == 0){
            if (arr[i+1] < arr[i]){
                rcdBreDays++;
            }            
        }else if(i == size-1){
            if (arr[i] > preMaxVisitor){
                rcdBreDays++;
            }            
        }else{
            if ((arr[i] > preMaxVisitor) && (arr[i+1] < arr[i])){
                rcdBreDays++;
                preMaxVisitor = arr[i];
            }            
        }
    }

    return rcdBreDays;       
}

int main(){

    int size;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>size;
    cout<<endl;

    int arr[size];
    cout<<"ENTER THE NUMBER OF VISITORS ON DIFFERENT DAYS."<<endl;
    cout<<"NOTE : Values must be seperated by usnig atlest one space."<<endl;
    
    for (int j = 0; j < size; j++){
        cin>>arr[j];
    }

    cout<<endl;  
    cout<<"Total number of Record Breaking Days are : ";    
    cout<<recordBreaker(arr, size);

    return 0;
}

/*
                                            OUTPUT

SET 1 : ENTER THE SIZE OF ARRAY : 8

        ENTER THE NUMBER OF VISITORS ON DIFFERENT DAYS.
        NOTE : Values must be seperated by usnig atlest one space.
        1 2 0 7 2 0 2 2 

        Total number of Record Breaking Days are : 2

*/        