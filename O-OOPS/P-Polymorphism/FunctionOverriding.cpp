
//Learn cpp
//Function Overriding Example


#include <iostream>
using namespace std;
class Animal {

public:
	void MakeSound() {

		cout << "I can speak \n";
	}

};

class Cow: public Animal {

public:
	void MakeSound() {

		cout << "Moooo \n";
	}
};
class Cat: public Animal {

public:
	void MakeSound() {

		cout << "Meaw \n";
	}
};

int main(void) {

	Cow c = Cow();
        Cat cat=Cat();

	c.MakeSound();
        cat.MakeSound();

	return 0;

}