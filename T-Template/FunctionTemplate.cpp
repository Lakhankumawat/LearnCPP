#include <iostream>
using namespace std;
 
template <typename T> //T is the template argument that accepts different data types
void func_swap(T &arg1, T &arg2)
{
  T temp;
  temp = arg1;
  arg1 = arg2;
  arg2 = temp;
}
 
int main()
{
  int num1 = 10, num2 = 20;
  double d1 = 100.53, d2 = 435.54;
  char ch1 = 'A', ch2 = 'Z';
   
  cout << "Original data\n";
  cout << "num1 = " << num1 << "\tnum2 = " << num2<<endl;
  cout << "d1 = " << d1 << "\td2 = " << d2<<endl;
  cout << "ch1 = " << ch1 << "\t\tch2 = " << ch2<<endl;
   
  //calling the function and passing different data types in each call; 
  func_swap(num1, num2);    //passing integer values in the arguments
  func_swap(d1, d2);        //passing double values in the arguments
  func_swap(ch1, ch2);      //passing character values in the arguments
   
  cout << "\n\nData after swapping\n";
  cout << "num1 = " << num1 << "\tnum2 = " << num2<<endl;
  cout << "d1 = " << d1 << "\td2 = " << d2<<endl;
  cout << "ch1 = " << ch1 << "\t\tch2 = " << ch2<<endl;
   
  return 0;
}