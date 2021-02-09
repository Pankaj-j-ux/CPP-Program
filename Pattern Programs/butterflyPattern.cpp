/*
This Program Draws the following Pattern.

                *             * 
                * *         * * 
                * * *     * * * 
                * * * * * * * * 
                * * * * * * * * 
                * * *     * * *
                * *         * *
                *             *

*/

#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;

    for (int i = 1; i <= num; i++){

        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }

        for (int j = 1; j <= 2*num-2*i; j++){
            cout<<"  ";
        }
        
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;    
    }
    
    for (int i = num; i >= 1; i--){

        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }

        for (int j = 1; j <= 2*num-2*i; j++){
            cout<<"  ";
        }
        
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;    
    }
     
    return 0;
}