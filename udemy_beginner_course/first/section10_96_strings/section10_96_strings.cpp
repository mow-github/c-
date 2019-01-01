
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
	cout << "\n\nSection 10 96 - strings \n" << endl;


	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[50]{};

	cout << "Please enter your first name: " << endl;
	cin >> first_name;

	cout << "Please enter your last name: " << endl;
	cin >> last_name;

	cout << "-----------------------------" << endl;

	cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;

	//strlen
	//strcpy
	//strcat
	//strcmp
	
	// size_t			// instead of etc int i = 0 in a for-loop ( instead of unsigned int )

	// isalpha
	// toupper
	// tolower


	// cin.getline(full_name, 50);	// max 50 chars



}
