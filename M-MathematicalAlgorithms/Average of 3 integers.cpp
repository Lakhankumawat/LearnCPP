/*
- This program calculates average of 3 integers
- Author: Abdullah Ibrahim
- Last modification date : 28/03/2022
 */

#include <iostream>

int main() {
    int nums[3];
    std::cout << "\nPlease enter 3 integers to calculate the average...\n";
    std::cin >> nums[0] >> nums[1] >> nums[2];
    std::cout << "\nAverage = " << (float)(nums[0] + nums[1] + nums[2])/3 << std::endl;
    return 0;
}
