/*
 Author: Adel Magdy 
 program name: Inverse right triangle
 program: print the Inverse of right triangle by stars
 last update: 28 mar 2022
 version 1
*/

#include <iostream>

using namespace std ;
int main(){
    int hieght ;
    // take the hieght of the right triangle as input
    cout << "enter the hieght right triangle: ";
    cin >> hieght ;
    cout<<endl ;
    // loop for rows
    for (int i = hieght ; i > 0 ; i-- ){
        // loop for column and print * for each column 
        for (int j = i ; j >= 1 ; j--){ 
            cout << '*' ;
        }
    cout << endl;
    }
    cout<<endl;
    }