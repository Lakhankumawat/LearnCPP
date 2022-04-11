//Learn Cpp
//Operator Overloading Example
#include<iostream> 
using namespace std;

class ComplexNum {
private:
	int real, imaginary;
public:
	ComplexNum(int rl = 0, int img = 0) {
		real = rl;   
		imaginary = img; 
	}

	ComplexNum operator + (ComplexNum const &obj) {
		ComplexNum result;
		result.real = real + obj.real;
		result.imaginary = imaginary + obj.imaginary;
		return result;
	}
	void print() { 
		cout << real << " + " << imaginary <<" i" << endl; 
	}
};
int main()
{
	ComplexNum c1(10, 2), c2(3, 7);
	ComplexNum c3 = c1+c2;
	c3.print();
}