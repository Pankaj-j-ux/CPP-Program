/*
This Program Draws the following Pattern.

                * 
              * *
            * * * 
          * * * *
        * * * * *
      * * * * * *
*/

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"ENTER A NUMBER : ";
    cin>>num;

    for (int i = 1; i <= num; i++){
        
        for (int j = 1; j <= num; j++){
            if(j<=num-i){
                cout<<"  ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;        
    }
    

    return 0;
}