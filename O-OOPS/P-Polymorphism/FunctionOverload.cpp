
//Learn CPP
//Example of  Function Overloading
#include <iostream> 
using namespace std;

void test(int i) {
	cout << " The int is " << i << endl;
}
void test(double  f) {
	cout << " The float is " << f << endl;
}
void test(char const *ch) {
	cout << " The char* is " << ch << endl;
}

int main() {
	test(5);
	test(5.5);
	test("five");
	return 0;
}