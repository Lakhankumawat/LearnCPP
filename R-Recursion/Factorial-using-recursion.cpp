/*                                       FACTORIAL NUMBER PROGRAM
TIME COMPLEXITY : O(N)
SPACE COMPLEXITY : O(N)    Here, N is recursion stack space.
Link to the article for reference : https://www.sciencedirect.com/topics/computer-science/factorial-function#:~:text=The%20factorial%20function%20can%20be,factorial(n%20%E2%80%93%201).        */

// Function to calculate factorial of a number
int factorial(int n) {

 if (n <= 1) //base case

 return 1;

 else

 return (n * factorial(n - 1));  //recursive call

}
int main(){
	int x;
	cout<<"Please enter the number, whose factorial is needed "<<endl;
	cin>>x;
	cout<<"The factorial of number "<<x<<" is "<<factorial(x)<<endl;
}
