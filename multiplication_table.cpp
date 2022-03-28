#include <iostream>

using namespace std ;

int main(){
int num;
int i = 1 ;

cout << "enter number : ";
cin >> num ;

while  (i <= 12){
    if (i >= 10){
            cout << "* " << i << " | " << i * num << "\n" ;
    }
    if (i < 10){
        cout << "* " << i << "  | " << i * num << "\n" ;
    }
    i++ ;
}

return 0 ;
}
