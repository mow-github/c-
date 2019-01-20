#include "pch.h"
#include <iostream>

#include <limits>
#include <climits>
#include <cfloat>

#include <vector>
#include <string>
#include <locale>     
#include <set> 

#include <cstring>  // for c-style string functions
#include <cctype>   // for character based functions

using std::cout;
using std::cin;
using std::endl;
using std::dec;
using std::hex;
using std::hexfloat;
using std::defaultfloat;
using std::numeric_limits;
using std::showbase;
using std::streamsize;

using std::vector;
using std::string;
using std::locale;
using std::set;


int main()
{
	std::cout << "-- Pointers start -- \n\n";

	int *p{ nullptr };

	std::cout << "Value p: " << p << endl;
	std::cout << "Adresss p: " << &p << endl;
	std::cout << "Sizof p: " << sizeof p << endl;

	//---------------------------------
	std::cout << "\n" << endl;

	int a{ 100 };
	int *a_ptr{ &a };
	std::cout << "actual value in a_ptr: " << *a_ptr << endl;
	std::cout << "actual value in a: " << a << endl;

	*a_ptr = 200;
	std::cout << "actual value in a_ptr: " << *a_ptr << endl;
	std::cout << "actual value in a: " << a << endl;

	//---------------------------------
	std::cout << "\n" << endl;

	string myname{ "John" };

	string *string_ptr{ &myname };
	std::cout << "actual value in string_ptr: " << *string_ptr << endl;
	std::cout << "actual value in myname: " << myname << endl;

	myname = "James";
	std::cout << "actual value in string_ptr: " << *string_ptr << endl;

	//---------------------------------
	std::cout << "\n" << endl;

	vector<string> vec1{ "adam", "ben", "cstring" };
	vector<string> *vector_ptr{ nullptr };

	vector_ptr = &vec1;
	std::cout << "actual value in vector pos 0, follow vector_ptr: " << (*vector_ptr).at(0) << endl;

	for (auto item : *vector_ptr)
	{
		std::cout << "actual value in vector, follow vector_ptr: " << item << endl;
	}

	//---------------------------------
	std::cout << "\n" << endl;


	int scor[]{ 1,2,3,4,5,-1 };
	std::cout << "scor: \t" << scor << endl;
	std::cout << "scor actual value: " << *scor << endl;

	int *scr_ptr{scor};
	std::cout << "scr_ptr: " << scr_ptr << endl;
	std::cout << "scr_ptr actual value: " << *scr_ptr << endl;


	// ptr math
	std::cout << "scr_ptr next adress(1up): " << (scr_ptr+1) << endl;
	std::cout << "scr_ptr next adress(2up): " << (scr_ptr+2) << endl;


	// ptr math2
	while (*scr_ptr != -1)
	{
		std::cout << "*scr_ptr++ vlue: " << *scr_ptr++ << endl;
	}

}

