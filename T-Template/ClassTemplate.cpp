//cpp program to illustrate class template
#include <iostream>
using namespace std;
 
template <class T>
class myclass {
  T a, b;
 public:
  myclass (T first, T second)
     {a=first; b=second;}
  T getMaxval ();
};
template <class T>
T myclass<T>::getMaxval ()
{
  return (a>b? a : b);
}
int main () {
  myclass <int> myobject (100, 75);     //object which takes integer in the constructor
  cout<<"Maximum of 100 and 75 = "<<myobject.getMaxval()<<endl;
    
  myclass<char> mychobject('A','a');    //object which takes integer in the constructor
  cout<<"Maximum of 'A' and 'a' = "<<mychobject.getMaxval()<<endl;
  
  return 0;
}