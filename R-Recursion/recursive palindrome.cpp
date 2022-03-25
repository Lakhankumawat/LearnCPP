#include <iostream>
using namespace std;

bool isPalindrome(string s, int i){

	if(i > s.size()/2){
	return true ;
	}

	return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;

}


int main()
{
	string str ;
	cout << "enter the string : ";
	cin >> str;
	if (isPalindrome(str, 0))
	cout << "Yes";
	else
	cout << "No";

	return 0;

}
