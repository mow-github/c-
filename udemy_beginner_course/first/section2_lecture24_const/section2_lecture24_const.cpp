
#include "pch.h"
#include <iostream>


using namespace std;

int main()
{
























































	int x = 5;
	const int MAX = 12;
	int &ref_x1 = x;
	const int &ref_x2 = x;

	//Try to modify the pointer (e.g. ptr1) and the pointee value (*ptr1)

	const int *ptr1 = &x;
	const int * ptr2 = &x;
	//const int * const ptr3 = &x;

	//*ptr2 = 66;

	//cout << "\nptr1: " << *ptr1;
	//cout << "\nptr1: " << &ptr1;

	//cout << "\nptr2: " << *ptr2;
	//cout << "\nptr2: " << &ptr2;


	//Find which declarations are valid. If invalid, correct the declaration
	const int *ptr3 = &MAX;
	const int *ptr4 = &MAX;

	cout << "\nptr3: " << &ptr3;

	const int &r1 = ref_x1;
	const int &r2 = ref_x2;

	const int *&p_ref1 = ptr1;
	const int *&p_ref2 = ptr2 ;

}
