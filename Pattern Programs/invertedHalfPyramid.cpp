/*
This Program Draws the following Pattern.

                ******
                *****
                ****
                ***
                **
                *

*/

#include <iostream>
using namespace std;

int main(){
    
    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;

    for (int i = 0; i < num; i++){
        for (int j = 0; j < num-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}