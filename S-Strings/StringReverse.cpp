//program to reverse a string using recursion in C++

#include <iostream>
#include <string.h>
using namespace std;

//#function to reverse a string
void reverse(char *x, int begin, int end)
{
char c;
if (begin >= end)
return;
c = *(x + begin);
*(x + begin) = *(x + end);
*(x + end) = c;
reverse(x, ++begin, --end);
}

int main()
{
char a[100];
cin >> a;
reverse(a, 0, strlen(a) - 1);
cout << a;
return 0;
}
