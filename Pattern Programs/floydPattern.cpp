/* 
This Program Draws the following Pattern.
               
                1 
                2 3
                4 5 6
                7 8 9 10 
                11 12 13 14 15

*/

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;
    int digit=0;

    for (int i = 0; i < num; i++){

        for (int j = 0; j <= i; j++){
            cout<<++digit<<" ";
        }
        cout<<endl;
            
    }

    return 0;
}