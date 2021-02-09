/*
This Program Draws the Following Patterm.

                  ******
                  ******
                  ******
                  ******
                  ******
*/

#include <iostream>
using namespace std;

int main(){

    int row, col;
    cout<<"ENTER NUMBER OF ROWS : ";
    cin>>row;
    cout<<"ENTER NUMBER OF COLOUMNS : ";
    cin>>col;

    for (int i = 0; i < row; i++){

        for (int j = 0; j < col; j++){
            cout<<"*";
        }
        cout<<endl;    
    }
    
    return 0;    
}