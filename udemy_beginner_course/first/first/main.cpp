


/*
<iostream> parents are:

	- std::basic_ostream & std::basic::istream
	- std::ostream & std::istream
	- stid::cout & std::cin

*/


#include <iostream>
#include <string>

#include "math.h"

using namespace std;



void Print(char ch) {
	for (int i = 0; i < 10; i++)
	{
		cout << ch;
	}
	cout << endl;
}




int Add(int *a, int *b) {
	//Add two numbers and return the sum
	// https://codescracker.com/cpp/program/cpp-program-add-two-numbers-using-pointers.htm
	cout << "------------------" << endl;
	*a = 7;
	cout << *a << endl;
	cout << *b << endl;
	return (*a + *b);
}


void AddVal(int *a, int *b, int *result) {
	//Add two numbers and return the sum through the third pointer argument

	*result = (*a + *b);

	cout << "-----------------AddVal: " << *result << endl;
	cout << "-------------------------------------------------" << endl;

}


void Swap(int *a, int *b) {
	//Swap the value of two integers

	int temp = *a;

	*a = *b;
	*b = temp;

}



void Factorial(int *a, int *result) {
	//Generate the factorial of a number and return that through the second pointer argument

	*result = 1;
	for (int i = *a; i > 1; i--)
	{
		*result *= i;
	}

	cout << "factorial: " << *a << "! is: " << *result << endl;


}



//-- tutorial start at: section 2, lecture 13 - end at:  section 2, lecture 16
//
int main() {

	Print('#');
	int factorialNr			 = 5; // ashould be 120: 5 x 4 x 3 x 2 x 1
	int factorialResult{};

	int *ptr_factorialNr			= &factorialNr;
	int *ptr_factorialResult	= &factorialResult;

	Factorial(ptr_factorialNr, ptr_factorialResult);
	Print('#');





	//---------------
	//Swap the value of two integers
	int a2 = 5;
	int b2 = 10;

	int *ptr_a2_t;
	ptr_a2_t = &a2;



	int *ptr_a2 = &a2;


	int *ptr_b2 = &b2;

	Swap(ptr_a2, ptr_b2);

	cout << "-----------------!!!! a2: " << *ptr_a2_t << endl;
	cout << "-----------------swap a2: " << *ptr_a2 << endl;
	cout << "------------------swap b2: " << *ptr_b2 << endl;

	// pointer fix memory leak
	//---------------


	//---------------
	// Add Two Numbers using Pointer
	int a = 5;
	int b = 10;

	int& apa = a;

	int *ptr_a;

	ptr_a = &a;

	cout << "0: " << a << endl;
	cout << "1: " << &a << endl;
	cout << "2: " << ptr_a << endl;
	cout << "3: " << *ptr_a << endl;
	cout << "4: " << &ptr_a << endl;

	int *ptr_b = &b;

	int sum = Add(&apa, ptr_b);
	cout << "Sum is: " << sum << endl;
	cout << "------------------" << endl;


	cout << "------------------: " << a << endl;

	//---------------
// Add Two Numbers using Pointer
	//int a = 5;
	//int b = 10;

	//int* ptr_a{ nullptr };
	//int* ptr_b{ nullptr };

	//ptr_a = &a;
	//ptr_b = &b;

	//int sum = Add(*ptr_a, *ptr_b);
	//cout << "Sum is: " << sum << endl;
	//cout << "------------------" << endl;


	//cout << "------------------: " << *ptr_a << endl;

	// free memory ?
	ptr_a = NULL;
	ptr_b = NULL;
	//---------------


	//---------------
	//Add two numbers and return the sum through the third pointer argument
	cout << "-------------------------------------------------" << endl;
	int a1 = 5;
	int b1 = 10;
	int result1{};

	int *ptr_a1 = &a1;
	int *ptr_b1 = &b1;
	int *ptr_result1 = &result1;

	AddVal(ptr_a1, ptr_b1, ptr_result1);

	//---------------




	 
	// pointers and dereference a pointer and pointer datatype
	// *
	// &
	// null pointer:	nullptr instead of null macro

	int x = 10;

	// cout hex memory adress
	cout << &x << "\n";

	int *ptr = nullptr;
	ptr = &x;

	cout << ptr << "\n";
	
	// x is 5, thanks t the pointer
	*ptr = 5;
	int y = *ptr;
	cout << x << "\n";


	return 0;
}



//-- tutorial start at: section 2, lecture 13 - end at:  section 2, lecture 16
//
//int main() {
//
//	// Uniform init syntax: { }	// it uses the types default value if no arg is set
//	// example:
//	//
//	int i{ };
//	initializer_list<int> list{1,2,3,4};
//
//
//	int x, y;
//	cout << "Please enter two ints: " << endl;
//	cin >> x >> y;
//	int result = Add(x,y);
//	
//	Print('#');
//
//	return 0;
//}
//
//














// -- tutorial start at 0 - end at: section 2, lecture 12
//
//int main() {
//
//	// Scalar types
//	string cinText;
//
//	// diff way to set a value to an variable...
//	string a1("test1");
//	string a2 = "test2";
//	bool b1 = true;
//	char c1 = 'a';
//	double d1 = 3.14;
//	float f1 = 3.14;
//
//
//	int maxChars = 64;
//
//	// Vector types
//	//
//	// arrays etc
//
//	// cin buffer
//	char cinBuff[512];
//	char cinBuff1[512];
//
//
//	cout << "Please, enter some text:" << endl;
//	cin >> cinText;
//	cout << "You entered: " << cinText << endl;
//	
//	cout << "Please, enter many chars:" << endl;
//	cin >> cinBuff;
//	cout << "You entered: " << cinBuff << endl;
//
//	// allow "whitespaces"
//	// ignore the memory '\n' before using the: cin.getline(...)
//	cout << "Please, enter many words:" << endl;
//	cin.ignore();
//	cin.getline(cinBuff1, maxChars, '\n');
//	cout << "You entered: " << cinBuff1 << endl;
//
//	return 0;
//}