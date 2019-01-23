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


class TestShallowCopyClass {
private:
	int *data;
	string _name;
public:
	TestShallowCopyClass(int d, string name);
	TestShallowCopyClass(const TestShallowCopyClass &source);
	~TestShallowCopyClass();
	void printData();
	void setData(int nr);
};

TestShallowCopyClass::TestShallowCopyClass(int d, string name) {
	data = new int;
	*data = d;
	_name = name;
	std::cout << "--> TestShallowCopyClass CTOR 1arg called \n";
}
TestShallowCopyClass::TestShallowCopyClass(const TestShallowCopyClass &source)
	:data(source.data) {
	//TestShallowCopyClass::TestShallowCopyClass(const TestShallowCopyClass &source) {
	//data = source.data;
	std::cout << "--> TestShallowCopyClass COPY CTOR 1arg called \n";
}
TestShallowCopyClass::~TestShallowCopyClass() {
	delete data;
	std::cout << "--> TestShallowCopyClass DTOR called: " << this->_name << endl;
}
void TestShallowCopyClass::printData() {
	std::cout << "printData: " << *data << endl;
}
void TestShallowCopyClass::setData(int nr) {
	*data = nr;
}




class TestDeepCopyClass {
private:
	int *data;
	string _name;
public:
	TestDeepCopyClass(int d, string name);
	TestDeepCopyClass(const TestDeepCopyClass &source);
	~TestDeepCopyClass();
	void printData();
	void setData(int nr);
};

TestDeepCopyClass::TestDeepCopyClass(int d, string name) {
	data = new int;
	*data = d;
	_name = name;
	std::cout << "--> TestDeepCopyClass CTOR 1arg called \n";
}
//TestDeepCopyClass::TestDeepCopyClass(const TestDeepCopyClass &source) {
//	data = new int;
//	*data = *source.data;
//	std::cout << "--> TestDeepCopyClass COPY CTOR 1arg called \n";
//}
TestDeepCopyClass::TestDeepCopyClass(const TestDeepCopyClass &source)
	: TestDeepCopyClass{ *source.data, source._name } {
	// delegate creation to the CTOR 2arg 

	std::cout << "--> TestDeepCopyClass COPY CTOR 1arg called: modified and send to CTOR \n";
}


TestDeepCopyClass::~TestDeepCopyClass() {
	delete data;
	std::cout << "--> TestDeepCopyClass DTOR called: " << this->_name << endl;
}
void TestDeepCopyClass::printData() {
	std::cout << "printData: " << *data << endl;
}
void TestDeepCopyClass::setData(int nr) {
	*data = nr;
}




class TestMoveCtorClass {
private:
	int *data;
	string _name;
public:
	// CTOR 1arg
	TestMoveCtorClass(int d) {
		data = new int;
		*data = d;
		std::cout << "-- ctor 1arg: \t\t" << d << endl;
	};

	// COPY CTOR 1arg
	TestMoveCtorClass(const TestMoveCtorClass &source)
		:TestMoveCtorClass{ *source.data } {
		std::cout << "-- COPY ctor 1arg: \t" << *data << endl;
	};

	// MOVE CTOR 1arg - "steal the data and null out the source ptr"
	//TestMoveCtorClass(TestMoveCtorClass &&source)
	//	: data{ source.data } {
	//	source.data = nullptr;
	//	std::cout << "-- MOVE ctor 1arg: " << *data << endl;
	//};


	~TestMoveCtorClass() {
		if (data != nullptr)
		{
			std::cout << "-- dtor freeing data: \t" << *data << endl;
		}
		else {
			std::cout << "-- dtor freeing data for nullptr" << endl;
		}
		delete data;
	};

	int get_data() {
		return *data;
	};
	void set_data_value(int d) {
		*data = d;
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


	std::cout << "\n --- \n" << endl;



	{
		// Problem1 - shallowCopy: only the pointer is copied and not what is's pointing to
		std::cout << "\n ---------------------------------------------------------------------- \n" << endl;
		std::cout << "\n Copy constructor - shallow: START \n" << endl;

		TestShallowCopyClass testShallowCopyClassObj1(5, "obj1");
		TestShallowCopyClass testShallowCopyClassObj2(5, "obj2");
		//TestShallowCopyClass testShallowCopyClassObj2(testShallowCopyClassObj1);
		std::cout << "\n Copy constructor - shallow: END \n" << endl;
		std::cout << "\n ---------------------------------------------------------------------- \n" << endl;

	}

	{
		std::cout << "\n ---------------------------------------------------------------------- \n" << endl;
		std::cout << "\n Copy constructor - DEEP copy: START \n" << endl;

		TestDeepCopyClass testDeepCopyClassObj1(7, "obj1");
		testDeepCopyClassObj1.printData();
		TestDeepCopyClass testDeepCopyClassObj2(testDeepCopyClassObj1);
		testDeepCopyClassObj2.printData();

		std::cout << "\n --- deep copy: change obj1 --- \n" << endl;
		// test: verify that obj1 changes data and obj2 data is the same as before
		testDeepCopyClassObj1.setData(555);
		testDeepCopyClassObj1.printData();
		testDeepCopyClassObj2.printData();

		std::cout << "\n --- deep copy: change obj2 --- \n" << endl;
		// test: verify that obj2 changes data and obj1 data is the same as before
		testDeepCopyClassObj2.setData(23);
		testDeepCopyClassObj2.printData();
		testDeepCopyClassObj1.printData();

		std::cout << "\n Copy constructor - DEEP copy: END \n" << endl;
		std::cout << "\n ---------------------------------------------------------------------- \n" << endl;
	}

	{
		std::cout << "\n ---------------------------------------------------------------------- \n" << endl;
		std::cout << "\n MOVE constructor: START \n" << endl;

		vector<TestMoveCtorClass> vec;
		vec.push_back(TestMoveCtorClass{10});
		vec.push_back(TestMoveCtorClass{20});



		std::cout << "\n MOVE constructor: END \n" << endl;
		std::cout << "\n ---------------------------------------------------------------------- \n" << endl;
	}


}

