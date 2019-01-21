#include "pch.h"
#include "AccountTest.h"
#include "Player.h"


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


class Account {
private:
	double balance;
public:
	void set_balance(double bal) {
		balance = bal;
	}
	double get_balance() {
		return balance;
	}
};

int main()
{
    std::cout << "-- understand classes \n"; 

		//------------- ex 1: class directly in this file

		Account accountObj1;
		accountObj1.set_balance(100);
		double currentValue = accountObj1.get_balance();
		cout << "Account value is: " << currentValue << endl;

		//------------- ex 2: include class from annother file (
		//											it has	a .h with the class signature (specification)  and
		//															a .cpp with the class body content (implementation) )

		AccountTest accounttestObj1;
		accounttestObj1.set_balance(56);
		accounttestObj1.test_console_write_balance();

		//------------- ex 3: class Player

		Player playerObj1;
		playerObj1.set_name("LoverMan");
		playerObj1.set_health(66);
		playerObj1.set_xp(10);
		playerObj1.output_playerData();


		// overload ctor example with ctor init.. lists
		Player playerObj2("ZombieMan", -99, 5);
		//playerObj2.set_health(-100);
		//playerObj2.set_xp(-50);
		playerObj2.output_playerData();

}

