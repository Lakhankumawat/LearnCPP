/*
FCAI – Programming 1 – 2022 - Assignment 2
Program Name: Morse Code_20210097.cpp
Program Description: This is an encryption and decryption program
Last Modification Date:
Author and ID and Group: Beshoy Hany Atia _ 20210097 _ Group: A
Teaching Assistant:
Purpose: This program encrypts or dycrypts a message using morse code
*/

#include<bits/stdc++.h>

using namespace std;


void cipher() {
    int key;
    cout << "Enter the key you want:\n";
    cin >> key;
    while (cin.fail() || key < 1) {
        cin.clear(), cin.sync();
        cout << "Invalid input\n" << "Enter the key you want:\n";
        cin >> key;
    }
    string text, encryption_strings[key];
    cout << "Enter the text you want to encrypt with size >= key:\n";
    while (true) {
        string temp, temp_without_spaces;
        cin.clear(), cin.sync();
        while (temp.empty())getline(cin, temp);

        for (int i = 0; i < temp.size(); ++i) {
            if (isalpha(temp[i]))temp_without_spaces += (char) tolower(temp[i]);
        }

        if (temp_without_spaces.size() >= key) {
            text = temp_without_spaces;
            break;
        }
        cout << "Enter the text you want to encrypt with size >= key:\n";
    }
    int cnt = 2*key-2;
    if(key==1){
        cout << "Cipher text: "<<text<<endl;
        return;
    }
    for (int i = 0; i < key; ++i) {
        if(cnt==0)cnt=2*key-2;
        for (int j = i; j < text.size(); j+=cnt) {
            encryption_strings[i] += text[j];
        }
        cnt -= 2;
    }
    cout << "Cipher text: ";
    for (int i = 0; i < key; ++i) {
        cout << encryption_strings[i];
    }
    cout << endl;
}

void decipher() {
    int key;
    cout << "Enter the key you want:\n";
    cin >> key;
    while (cin.fail() || key < 1) {
        cin.clear(), cin.sync();
        cout << "Invalid input\n" << "Enter the key you want:\n";
        cin >> key;
    }
    string text, encryption_strings[key], decrypted_text;
    int sizes[key], indx[key];
    cout << "Enter the text you want to decrypt with size >= key:\n";
    while (true) {
        string temp, temp_without_spaces;
        cin.clear(), cin.sync();
        while (temp.empty())getline(cin, temp);

        for (int i = 0; i < temp.size(); ++i) {
            if (isalpha(temp[i]))temp_without_spaces += (char) tolower(temp[i]);
        }

        if (temp_without_spaces.size() >= key) {
            text = temp_without_spaces;
            break;
        }
        cout << "Enter the text you want to decrypt with size >= key:\n";
    }
    for (int i = 0; i < key; ++i) {
        sizes[i] = 0;
        indx[i] = 0;
    }
    bool flag = false;
    int idx = 0;
    if (key == 1)sizes[0] = text.size();
    else {
        for (int i = 0; i < text.size(); ++i) {
            if (!flag) {
                if (idx == key - 1) {
                    sizes[idx]++;
                    idx--;
                    flag = true;
                } else {
                    sizes[idx]++;;
                    idx++;
                }
            } else {
                if (idx == 0) {
                    sizes[idx]++;;
                    idx++;
                    flag = false;
                } else {
                    sizes[idx]++;;
                    idx--;
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < text.size(); ++i) {
        encryption_strings[cnt] = text.substr(i, sizes[cnt]);
        i += sizes[cnt] - 1;
        cnt++;
    }
    idx = 0, flag = false;
    if (key == 1)decrypted_text = text;
    else {
        for (int i = 0; i < text.size(); ++i) {
            if (!flag) {
                if (idx == key - 1) {
                    decrypted_text += encryption_strings[idx][indx[idx]];
                    indx[idx]++;
                    idx--;
                    flag = true;
                } else {
                    decrypted_text += encryption_strings[idx][indx[idx]];
                    indx[idx]++;
                    idx++;
                }
            } else {
                if (idx == 0) {
                    decrypted_text += encryption_strings[idx][indx[idx]];
                    indx[idx]++;
                    idx++;
                    flag = false;
                } else {
                    decrypted_text += encryption_strings[idx][indx[idx]];
                    indx[idx]++;
                    idx--;
                }
            }
        }
    }
    cout << "Plain text is: " << decrypted_text << endl;
}

int main() {
    cout << "\t*Welcome user*\n";
    while (true) {
        cout << "\nWhat do you like to do today?\n1- Cipher a message\n2- Decipher a message\n3- End\n";
        int option;
        cin >> option;
        while (cin.fail() || option < 1 || option > 3) {
            cin >> option;
            cin.clear();
            cin.sync();
        }
        if (option == 1) {
            cipher();
        } else if (option == 2) {
            decipher();
        } else {
            break;
        }
    }
    cout << "Thank you for using my program :)\n";
}
