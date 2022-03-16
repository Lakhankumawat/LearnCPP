#include<iostream>
using namespace std;

int makeEqualLength(string& str1, string& str2) {
	int len1 = str1.size();
	int len2 = str2.size();
	if (len1 < len2) {
		for (int i = 0; i < len2 - len1; i++)
			str1 = '0' + str1;
		return len2;
	}
	else if (len1 > len2) {
		for (int i = 0; i < len1 - len2; i++)
			str2 = '0' + str2;
	}
	return len1;
}
string addBitStrings(string firstString, string secondString) {
	string result;
	int length = makeEqualLength(firstString, secondString);
	int carry = 0;

	for (int i = length - 1; i >= 0; i--) {
		int firstBit = firstString.at(i) - '0';
		int secondBit = secondString.at(i) - '0';
		int sum = (firstBit ^ secondBit ^ carry) + '0';

		result = (char)sum + result;
		carry = (firstBit & secondBit) | (secondBit & carry) | (firstBit & carry);
	}
	if (carry) result = '1' + result;
	return result;
}
int multiplyiSingleBit(string a, string b) {
	return (a[0] - '0') * (b[0] - '0');
}
long long multiply(string X, string Y) {
	int n = makeEqualLength(X, Y);
	// Base cases
	if (n == 0) return 0;
	if (n == 1) return multiplyiSingleBit(X, Y);

	int firstHalf = n / 2;
	int seecondHalf = (n - firstHalf);
	string firstSubStringX = X.substr(0, firstHalf);
	string secondSubStringX = X.substr(firstHalf, seecondHalf);

	string firstSubStringY = Y.substr(0, firstHalf);
	string secondSubStringY = Y.substr(firstHalf, seecondHalf);

	long long P1 = multiply(firstSubStringX, firstSubStringY);
	long long P2 = multiply(secondSubStringX, secondSubStringY);
	long long P3 = multiply(addBitStrings(firstSubStringX, secondSubStringX), addBitStrings(firstSubStringY, secondSubStringY));
	return P1 * (1 << (2 * seecondHalf)) + (P3 - P1 - P2) * (1 << seecondHalf) + P2;
}
bool isEven(long long number) {
	return !(number & 1);
}
string reverseString(string s) {
	int last = s.size() - 1;
	for (int first = 0; first < s.size() / 2; first++, last--) {
		swap(s[first], s[last]);
	}
	return s;
}
string convertToBinray(long long number) {
	string res = "";
	while (number) {
		if (isEven(number)) {
			res.push_back('0');
		}
		else res.push_back('1');
		number /= 2;
	}
	return reverseString(res);
}
int main() {
	string firstNumber = convertToBinray(41);
	string secondNumber = convertToBinray(42);
	cout << multiply(firstNumber, secondNumber) << endl;
}
