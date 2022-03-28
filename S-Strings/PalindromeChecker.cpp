/* 
 * Author: Youssef Bakry
 * Contact: yousefbakry731@gmail.com
 * Program Name: Palindrome Checker
 * Program Description: check if a string is a palindorme 
 * Last Modification Date; 28 mar 2022
 * Version: 1.0
 */
#include <iostream>

using namespace std ;

/* Take a string 
 * The check is done by comparing the first letter with the last letter, 
 * then the second letter with the penultimate letter, and so on
 */
bool is_palindrome(string str , int length){
    bool are_equal = false ;
    for (int i= 0 ; i <= length/2 ; i++){
        if (str[i] == str[length - i -1])
            are_equal = true ;

        else 
            are_equal = false ;
            break ;
    }
}

int main (){
    string text;
    cout << "Enter a string to check if it is palindrome: ";
    cin >> text ;
    
    if (is_palindrome(text , text.length()))
        cout << "It is palindrome" << endl;

    else 
        cout << "It is not palindrome" << endl;
    return 0 ;
}