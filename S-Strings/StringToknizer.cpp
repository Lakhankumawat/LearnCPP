
#include<cstring>
#include<iostream>
using namespace std;

//char *strtokchar *s,char *delimiters
//returns a token on each subsequent call
//on the first call function pass the string argument for 's'
//on subsequent pass string argument as null

int main(){

char s[100]="Today is a preety day";

char *ptr=strtok(s," ");
cout<<ptr<<endl;

//next one first pass null

 while(ptr!=NULL){
    ptr=strtok(NULL," ");
    cout<<ptr<<endl;
 }

//we can also have separator/delimiter as , or anything ?


return 0;
}


