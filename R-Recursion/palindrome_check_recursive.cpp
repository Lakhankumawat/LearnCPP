//Program to check whether string is palindrome or not using recursion
#include <bits/stdc++.h>
using namespace std;

//boolean recursive function to check if string is palindrome or not
bool check_palindrome(string str, int start, int end)
{
	//in case of odd length string , if start = end , hence the string will become palindrome
	// in case of even length string , if start > end , then the given string is palindrome
	if(start >= end){
		return true;
	}
	return ((str[start]==str[end]) && check_palindrome(str, start + 1, end - 1));		     
}

//Driver Code
int main() {
	
	string str = "abcba";
	if (check_palindrome(str, 0, str.length() -1)) {
		cout<<"Given string is palindrome"<<endl;
	}
	else {
		cout<<"Given string is not a palindrome"<<endl;
	}
	return 0;
}

// time complexity of this code is O(n) because 
// in worst case : it will check and compare each character of string and then the time complexity will be equal to theta(n)
// in best case : it will immediately return false when the corner characters of string doesn't match


// auxilary space of this code is O(n) because
// in worst case : it will check and compare each character of string and then the auxilary space will be equal to theta(n)
// in best case : it will immediately return false when the corner characters of string doesn't match and the auxilary space is O(1)
