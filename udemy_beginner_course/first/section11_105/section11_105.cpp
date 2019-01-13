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


void pass_by_value(int num);
void pass_by_ref(int &num);

void print_array(int num_array[]);
void set_array_values_tozero(int num_array[]);


void pass_by_value(int num) {
	num = 100;
}

void pass_by_ref(int &num) {
	num = 100;
}

void print_array(int num_array[], size_t size) {
	for (size_t i{ 0 }; i < size; i++)
	{
		cout << num_array[i] << ", ";
	}
	cout << endl;
}

// NOTE: use etc, const int num_array[] - avoid changing the array
void set_array_values_tozero(int num_array[], size_t size) {
	for (size_t i{ 0 }; i < size; i++)
	{
		num_array[i] = 0;
	}
}

int main()
{
    cout << "section 11 - functions:\n" << endl; 

		int num{50};
		int num_array[] {1,2,3,4,5,6};
		int num_array_length = sizeof(num_array) / sizeof(num_array[0]);

		// pass by value - should not change the ORG value
		cout << "pass_by_value (BEFORE) num: "<< num << endl;
		pass_by_value(num);
		cout << "pass_by_value (AFTER) num: " << num << endl;

		cout << "\n" << endl;

		// pass by ref - should change the ORG value
		cout << "pass_by_ref (BEFORE) num: " << num << endl;
		pass_by_ref(num);
		cout << "pass_by_ref (AFTER) num: " << num << endl;

		cout << "\n" << endl;


		//NOTE: array are not passed by value
		print_array(num_array, num_array_length);
		set_array_values_tozero(num_array, num_array_length);
		print_array(num_array, num_array_length);




}

