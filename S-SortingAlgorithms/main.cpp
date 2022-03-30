#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[200], ch;
    int i, j, len;
    cout<<"Enter the String: ";
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout<<"\nString in Ascending Order: "<<str;
    cout<<endl;
    return 0;
}
