/* 
This Program Draws the following Pattern.

                1 
                2 2
                3 3 3
                4 4 4 4
                5 5 5 5 5
                6 6 6 6 6 6
*/

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}