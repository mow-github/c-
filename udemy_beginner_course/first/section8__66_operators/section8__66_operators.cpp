
#include "pch.h"
#include <iostream>

#include <limits>
#include <climits>
#include <cfloat>

#include <vector>
#include <string>

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

int main()
{

	const double usd_per_eur{1.19};
	double euros{0.0};
	double dollars{0.0};

	cout << "Welcome to the EUR to USD converter" << endl;
	cout << "Enter the value in EUR: " << endl;


	cin >> euros;
	dollars = euros * usd_per_eur;

	cout << euros << " Euros is eq. to $" << dollars << endl;


	return 0;
}

