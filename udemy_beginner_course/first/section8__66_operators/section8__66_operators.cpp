
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

	//------------- START: section 8, 74 - convert etc. 100 cents into x dollar, quarter, dime, nickel, penny
	
	
	// Example: 

	// 1 dollar		eq. 100 cents
	// 1 quarter	eq.  25 cents
	// 1 dime			eq.  10 cents
	// 1 nickel		eq.  5 cents
	// 1 penny		eq.  1 cents

	int amountInCent{ 0 };

	int amountInDollar{ 0 };
	int amountInQuarter{ 0 };
	int amountInDime{ 0 };
	int amountInNickel{ 0 };
	int amountInPenny{ 0 };

	int amountInCentCurrent{ 0 };

	int dollarToCent{100};
	int quarterToCent{25};
	int dimeToCent{10};
	int nickelToCent{5};
	int pennyToCent{1};



	cout << "Enter your amount in cents please" << endl;
	cin >> amountInCent;

	amountInCentCurrent = amountInCent;

	cout << "Thank you, your amount in cents is: " << amountInCent << endl;

	// in:  267
	// out: 2	2	1 1 2 		

	while (amountInCentCurrent - dollarToCent >= 0) {
		cout << "\t--> incremented amountInDollar by 1" << endl;
		amountInDollar++;
		amountInCentCurrent -= dollarToCent;
	}

	while (amountInCentCurrent - quarterToCent >= 0) {
		cout << "\t--> incremented amountInQuarter by 1" << endl;
		amountInQuarter++;
		amountInCentCurrent -= quarterToCent;
	}

	while (amountInCentCurrent - dimeToCent >= 0) {
		cout << "\t--> incremented amountInDime by 1" << endl;
		amountInDime++;
		amountInCentCurrent -= dimeToCent;
	}

	while (amountInCentCurrent - nickelToCent >= 0) {
		cout << "\t--> incremented amountInNickel by 1" << endl;
		amountInNickel++;
		amountInCentCurrent -= nickelToCent;
	}

	while (amountInCentCurrent - pennyToCent >= 0) {
		cout << "\t--> incremented amountInPenny by 1" << endl;
		amountInPenny++;
		amountInCentCurrent -= pennyToCent;
	}

	cout << "\nThank you, your remaining amount in cents is: " << amountInCentCurrent << endl;
	cout << "Dollar:\t\t" << amountInDollar << endl;
	cout << "Quarter:\t" << amountInQuarter << endl;
	cout << "Dime:\t\t" << amountInDime << endl;
	cout << "Nickel:\t\t" << amountInNickel << endl;
	cout << "Penny:\t\t" << amountInPenny << endl;


	
	
	
	
	//------------- section 8, 74 - convert etc. 100 cents into x dollar, quarter, dime, nickel, penny: END

	//const double usd_per_eur{1.19};
	//double euros{0.0};
	//double dollars{0.0};

	//cout << "Welcome to the EUR to USD converter" << endl;
	//cout << "Enter the value in EUR: " << endl;


	//cin >> euros;
	//dollars = euros * usd_per_eur;

	//cout << euros << " Euros is eq. to $" << dollars << endl;


	return 0;
}

