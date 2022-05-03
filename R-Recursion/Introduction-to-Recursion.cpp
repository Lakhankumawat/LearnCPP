#include<iostream>
using namespace std;
int sum(int k) { //recursion function made
  if (k > 0) { //base condition
    return k + sum(k - 1);
  } else {
    return 0; //termination condition
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
