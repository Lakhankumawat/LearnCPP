#include <iostream>

int main() {
	int mark = 1000;
	while (mark > 100 || mark <= 0) {
		std::cout << "Please enter your mark: ";
		std::cin >> mark;
		if (!std::cin) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
	if (mark >= 90) {
		std::cout << "A+";
	}
	else if (mark >= 85) {
		std::cout << 'A';
	}
	else if (mark >= 80) {
		std::cout << "B+";
	}
	else if (mark >= 75) {
		std::cout << 'B';
	}
	else if (mark >= 70) {
		std::cout << "C+";
	}
	else if (mark >= 65) {
		std::cout << 'C';
	}
	else if (mark >= 60) {
		std::cout << "D+";
	}
	else if (mark >= 50) {
		std::cout << 'D';
	}
	else {
		std::cout << 'F';
	}
}