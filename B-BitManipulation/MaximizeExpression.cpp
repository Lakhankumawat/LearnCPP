#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/maximize-the-expression-bit-manipulation/
#define MAX 32
 
// Function to return the value of the maximized expression
int maximizingTheExpression(int x, int y)
{
    int ans = x;
 
    // int can have 32 bits
    for (int bit = MAX - 1; bit >= 0; bit--) {
 
        // Considering the ith bit of W to be 1
        int bitOfW = 1 << bit;
 
        // Calculating the value of (y AND bitOfW)
        int a = y & bitOfW;
 
        // Checking if bitOfD satisfies (y AND W = W)
        if (a == bitOfW) {
 
            // Checking if bitOfD can maximize (x ^ W)
            int b = ans & bitOfW;
            if (b == 0) {
                ans = ans ^ bitOfW;
            }
        }
    }
 
    return ans;
}
 

int main()
{
    int x, y;
    cout<<"Enter the value of x and y ";
    cin>>x>>y;
 
    cout << maximizingTheExpression(x,y);
 
    return 0;
}