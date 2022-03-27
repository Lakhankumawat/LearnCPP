#include <iostream>
#include <string>

using namespace std;

void getInput();
void convertToLowerCase(string text);

int main(){

    getInput();

    return 0;
}

void getInput(){

    string userText;

    cout << "Enter the text to convert to lowercase :" << endl;

    getline(cin, userText);

    convertToLowerCase(userText);

}

void convertToLowerCase(string text){

    for (int i = 0; i < text.length(); ++i) {

        if (isupper(text[i])){

            text[i] = tolower(text[i]);

        }

    }

    cout << text;

}