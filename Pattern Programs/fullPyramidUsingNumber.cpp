/*
This Program Draws the following Pattern.

                1 
               1 2
              1 2 3 
             1 2 3 4
            1 2 3 4 5
           1 2 3 4 5 6

*/

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;
    
    for (int i = 1; i <= num; i++){
        
        for (int j = 1; j <= num-i; j++){
            cout<<" ";
        }

        for (int j = 1; j <=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;        
    }
    
    return 0;
}