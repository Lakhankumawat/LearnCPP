#include <iostream>
#include <cmath>
#include <cassert>


#ifndef VECTOR_H
#define VECTOR_H



class Vector{
     private:

	int *arr = nullptr ;
	int size , capacity ;

	void expand_capaxity(){

	     capacity *=5 ;
	     int *arr_expand = nullptr ;
	     arr_expand = new int [ capacity ]{} ;

	     for( int i = 0 ; i < size ; i++)
               arr_expand[i] = arr[i] ;

	     swap( arr , arr_expand ) ;

	     delete[] arr_expand ;
	}

     public:

	Vector( int s):size(s) ;

	~Vector() ;

	void set( int ind , int value ) ;

	int get_index( int ind ) ;

	int get_back() ;

	int get_front();

	void insertion_version_1( int ind , int value ) ;

     void insertion_version_2( int ind , int value ) ;

	int find(int value) ;

	void push_Back( int value );

     void print();

     void right_rotation() ;

     void left_rotation() ;

     void right_rotation_times( int times ) ;

     void left_rotation_times( int times ) ;

     int pop( int ind ) ;

};



#endif // VECTOR_H
