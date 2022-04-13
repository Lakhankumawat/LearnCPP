#include <iostream>
#include <cmath>
#include <cassert>
#include "Vector.h"


using namespace std ;

int main(){

	Vector v(1) ;

	v.set( 0 , 4) ;

	v.push_Back(6) ;

	v.insertion_version_1( 1 , 2 );
	v.insertion_version_2( 2 , 9 ) ;

	v.print() ; // 4 2 9 6

	v.right_rotation() ; // 6 4 2 9
	v.left_rotation() ; // 4 2 9 6
	v.right_rotation_times(2) ; // 9 6 4 2

	v.print() ;

	cout << "A deleted value is " << v.pop( 1 ) << endl ; // 6

	v.print() ; // 9 4 2

}
