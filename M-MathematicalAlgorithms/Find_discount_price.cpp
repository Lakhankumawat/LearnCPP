/* 
Author: Mohamed Waleed
Program Name: Find discounted price
Program Description: After being given a price and its discount, it finds the final discounted value of that price
Last Modification: 29/3/2022
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    int price, discount, final_Price;

    // Takes the inputs
    cout << "Please enter the price along with the discount\nPrice: ";
    cin >> price;
    cout << "\nDiscount: ";
    cin >> discount;

    // Formula to find value after discount
    final_Price = (price * discount/100);

    // Showing the discounted price
    cout << "\nPrice after discount: "<< final_Price;
}