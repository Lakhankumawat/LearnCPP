#include <string>
#include <iostream>
#include<algorithm>
#include <sstream>


using namespace std;


// Main Menu
int main(){
    int choice;
    string str;
    cout << "Enter 1 or 2: ";
    cin >> choice;
    cout << "Enter text: ";
    cin.ignore();
    getline(cin,str);
    // Recall functions
    if (choice == 1){
        cout << "1 ";
        cout << str;
    }else if (choice == 2){
        cout << "2 ";
        cout << str;
    }else if (choice == 3){
        return EXIT_FAILURE;
    }else{
        main();
    }
}
