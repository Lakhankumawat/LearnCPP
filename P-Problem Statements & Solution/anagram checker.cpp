//   anagram checker
//created by : salma amir
//contact : salmaameer409@gmail.com
//description : check for anagram words
//last modification : 25-3-2022



#include <iostream>
#include <string>
using namespace std;

// the anagram checker function

void  anagramChecker(string& word1 , string& word2);



int main() {

   string word1 , word2 ;


   cout << "              ... welcome to anagram checker " << endl;
   cout << " ...This program is to check if two words are anagram or not...\n   ...All you have to do is enter the two words you want to check...\n";
   cout << "please enter the first word :";
   cin >> word1 ;
   cout << "please enter the second  word :";
   cin >> word2;

   // call the function that we made below and send the parameters to it "word 1 and word2"
   anagramChecker(word1 , word2 );



}
 // the anagram checker function
void anagramChecker(string& word1 , string& word2){

    //get the length of each word
    int n1 = word1.length();
    int n2 = word2.length();

    //sort the two words
   sort (word1.begin(),word1.end());
   sort (word2.begin(),word2.end());

    // for loop to check if the characters are the same
    for (int i = 0; i <n1 ; ++i) {
        if (word1[i] == word2[i]){
            cout << "Yes";
            break;
        }
        else{
            cout << "No";
            break;
        }

    }






}
