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


void pass_by_value(int num) {
	num = 100;
}

void pass_by_ref(int &num) {
	num = 100;
}

int main()
{
    cout << "section 11 - functions:\n" << endl; 

		int num{50};

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


}

