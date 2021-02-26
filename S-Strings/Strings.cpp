#include<string>
#include<iostream>
using namespace std;

int main(){

string s0("Hello world");
string s1="Hello world";

string s2(s1);

string s3=s2;

char a[]={'a','b','c','\0'};
string s4=a;

cout<<s1<<endl<<s2<<endl<<s3<<endl<<s0<<endl<<s4<<endl;

//Append String
s1.append(" how are you ");
cout<<s1<<endl;


//Remove String
cout<<s2.length()<<" Before clear "<<endl;
s2.clear();
cout<<"After clear length : "<<s2.length()<<endl;


//Compare string
s0="Apple";
s1="Mango";

cout<<s0.compare(s1)<<endl; //Returns integer 0 if equal and , >0 or <0 checks strings lexi

if (s1>s0)
    cout<<"Mango is lexi greater than Apple"<<endl;


    string s="I am a good boy";
    int indx=s.find("good");
    cout<<"Index pos of good is"<<indx<<endl;

    string word="good";

    int len=word.length();
    cout<<s<<endl;

    //Remove the length of word (starting index,length)
    s.erase(indx,len);
    cout<<s<<endl;

    //Iterate over all the characters in the string

    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<":";
    }
    cout<<endl;
    //Using iterator string :: iterator it  in place of auto

    for (auto it=s1.begin();it!=s1.end();it++)
        cout<<(*it)<<".";
    cout<<endl;

    //For Each Loop , char in place of auto
    for(auto c:s1)
    cout<<c<<"|";


return 0;
}
