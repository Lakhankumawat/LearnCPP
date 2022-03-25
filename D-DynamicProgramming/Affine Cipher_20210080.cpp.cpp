// FCAI � Programming 1 � 2022 - Assignment 2
// Program Name: Affine cipher.cpp
// Program Description: Encrypt and decrypt messages using Affine cipher
// Last Modification Date: 15/3/2022
// Author1 and ID and Group: 20210080
// Teaching Assistant: xxxxx xxxxx
// Purpose: Practicing c++

#include<iostream>
#include<bits/stdc++.h>


using namespace std;
string o;

void AffineCipher(int a,int b,int c) {
    string s,ns;
    cout<<"enter your massage :\n";
    cin.clear(); cin.sync(); getline(cin,s);
    ns=s;
    for (int i=0 ;i<s.size();i++){
              if (towlower(s[i])>122 || towlower(s[i])<97){ns[i] = towlower(s[i]) ;}
else {
        ns[i]=char(  ((( a *(towlower(s[i])-97) +b  )%26 + 26)%26)+97);
    }
    }
    cout<<" your massage after encryption is: "<<ns<<endl;

}

void AffineDecipher (int a,int b,int c) {
    string s,ns;
    cout<<"enter your massage : \n";
    cin.clear(); cin.sync(); getline(cin,s);
    ns=s;
    for (int i=0 ;i<s.size();i++){
              if (towlower(s[i])>122 || towlower(s[i])<97){ns[i] =towlower(s[i]);}
              else {
        ns[i]= char ((( c *(  (towlower(s[i])-97)- b  )%26 + 26)%26)+97);
    }
    }
    cout<<" your massage after decryption is: "<<ns<<endl;
}

void Affine() {
    int a = 5, b = 8, c = 21;
    int n;

    while (1) {

        cout
                << "welcome to Affine cipher. \n What do you like to do today? \n 1- Cipher a message \n 2- Decipher a message \n 3- Change the cipher and decipher constants a,b and c \n type any other thing to go to ciphers main menu "
                << endl;
        cin >> o;
        n = o[0] - 48;
        if (n == 1) { AffineCipher(a, b, c); }
        else if (n == 2) { AffineDecipher(a, b, c); }
        else if (n == 3) {
            cout
                    << "enter a,b and c constants space-separated, cipher formula is (a x+ b)%26 and decipher formula is c*(y - b)%26 : "
                    << endl;
            while (1) {
                cin >> a >> b >> c;
                if ((a * c) % 26 == 1) break;
                cout
                        << "non valid numbers please enter a,b and c constants again satisfying the condition (a * c) mod 26 = 1 :\n";
            }
        } else { return; }
    }
}

int main() {
    Affine();
}
