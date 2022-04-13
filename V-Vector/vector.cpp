#include "Vector.h"
#include <iostream>
#include <cmath>

Vector::Vector( int s):size(s){

		if( s < 0 )
			s = 1 ;

          capacity = 3000 ;

		arr = new int [ capacity ] {};
}

Vector::~Vector(){

		delete[] arr ;
		arr = nullptr ;

}

void Vector::set( int ind , int value ){

          // ind is a zero bassed
		assert(0 <= ind && ind < size);
		arr[ ind ] = value ;
}

int Vector::get_index( int ind ){

		assert( ind >= 0 && ind < size ) ;
		return arr[ ind ] ;
}

int Vector::get_back(){
		return arr[size - 1] ;
}

int Vector::pop( int ind ){

          assert( ind >=0 && ind < size ) ;

          int value = arr[ ind ] ;

          for( int i = ind ; i < size - 1 ; i++)
               arr[ i ] = arr[ i+1 ] ;

          arr[ --size ] = 0 ;

          return value ;

}

void Vector::left_rotation_times( int times ){

          times %= size ;

          while( times-- ){

               left_rotation() ;
          }
}

void Vector::right_rotation_times( int times ){

          times %= size ;

          while( times-- ){

               right_rotation() ;
          }
}


void Vector::left_rotation(){

          int val = arr[0] ;

          for( int i = 0 ; i < size-1 ; i++)
               arr[i] = arr[i+1] ;

          arr[size - 1] = val ;

}


int Vector::get_front(){
		return arr[0] ;
	}

void Vector::insertion_version_1( int ind , int value ){

	     int *arrins = new int[ size+1] ;
	     int *j = new int ;
	     int i = 0 ;
	     j = new int {i} ;

	     for( i =0 ; i < size+1 ; i++ ){


               if( i == ind ){
                    arrins[ ind ] = value ;

                    continue ;
               }

               arrins[i] = arr[(*j)++ ] ;

	     }
	     size++ ;

	     swap( arr , arrins) ;

	     delete[] arrins ;
	     delete j ;
	     j = nullptr ;
	     arrins = nullptr ;

	}

void Vector::insertion_version_2( int ind , int value ){

          assert( ind >= 0 && ind < size ) ;

          if( size == capacity )
               expand_capaxity() ;

          for( int i = size - 1 ; i >= ind ; i--)
               arr[ i+1 ] = arr[ i ] ;

          arr[ ind ] = value ;
          size++ ;
     }

int Vector::find(int value) {
		for (int i = 0; i < size; ++i)
			if (arr[i] == value)
				return i;
		return -1;	// -1 for NOT found
	}

void Vector::push_Back( int value ){

		if( size == capacity )
               expand_capaxity() ;
          arr[ size++ ] = value ;

	}

void Vector::print(){

          for( int i = 0 ; i < size ; i++)
               cout << arr[i] << " " ;
          cout << endl ;
     }

void Vector::right_rotation(){

          int val = arr[ size - 1 ] ;

          for( int i = size -1 ; i > 0 ; i--)
               arr[ i ] = arr[ i-1 ] ;
          arr[ 0 ] = val ;

     }

