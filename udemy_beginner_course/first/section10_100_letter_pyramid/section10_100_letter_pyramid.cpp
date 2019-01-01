
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


		cout << "\n Section 10 100 - letter pyramid \n"; 
		cout << "\n\n\n\n" << endl;


		string userChars{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

		// space		A		space
		// 	A				B		A			

		//string userChars{ "ABC" };
		//
		// space	space		A		space space
		// space	A				B		A			space
		// A			B				C		B			A

		// Ref: https://www.programiz.com/cpp-programming/examples/pyramid-pattern

		int rows, count = 0, count1 = 0, k = 0;

		rows = userChars.length();

		for (int i = 1; i <= rows; ++i)
		{
			for (int space = 1; space <= rows - i; ++space)
			{
				cout << "  ";
				++count;
			}

			while (k != 2 * i - 1)
			{
				if (count <= rows - 1)
				{
					//cout << i + k << " ";
					cout << (userChars[k]) << " ";
					++count;
				}
				else
				{
					++count1;
					//cout << i + k - 2 * count1 << " ";
					cout << ( userChars[k-2 * count1] )  << " ";
				}
				++k;
			}
			count1 = count = k = 0;

			cout << endl;
		}



		cout << "\n\n\n\n" << endl;


}

