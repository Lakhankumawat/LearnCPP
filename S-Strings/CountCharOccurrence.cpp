//----------Counts the Occurence of particular Chararacter in String ------//
#include<iostream>
#include<string>
using namespace std ;

// to count occurrence of character in a string
void countEachChar(string str){ // taking sentence as input
    int *counter = new int[256]; // array for all character
    int len = str.size();
    for (int i = 0; i <len; i++){
        counter[str[i]]++; // increment for particular characters
    }
    char *array = new char[str.size()];
    for (int i = 0; i < len; i++){
        array[i]=str[i];
        int flag =0;
        for (int j = 0; j <=i; j++){
            if(str[i]==array[j]){
                flag++;
            }
        }
        if(flag==1){ // cout only for flag value 1 so that all character occurrence display only once
            cout<<"Occurrence of charater "<<str[i]<<" in the string is : "<<counter[str[i]]<<endl;
        }
    }
    

}


int main(){
    string sentence;
    cout<<"Enter the sentence : ";
    getline (cin,sentence); // input string
    countEachChar(sentence); // calling function to count occurrence
return 0;
}
