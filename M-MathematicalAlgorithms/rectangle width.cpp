#include <iostream>

int main() {
    int width;
    int length;
    int area;
    std::cout << "insert the width of the rectangle: ";
    std::cin >> width;
    std::cout << "insert the length of the rectangle: ";
    std::cin >> length;
    std::cout << "The area of the rectangle is: " << width*length << ".";
}