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



struct Person {
	string name;
	int age;

	bool operator >(const Person &rhs) const{
		return this->age > rhs.age;
	}

};


template<typename T>

T max(T a, T b){
	return (a > b) ? a : b;
}


int main()
{
	cout << "stl start" << endl;
	
	auto result = max(2, 5);

	cout << "result: " << result << endl;



	Person p1{"Adam", 23};
	Person p2{"Bert", 33};
	Person p3 = max(p1,p2);
	cout << "result: " << p3.name << endl;



	cin.get();
	return 0;
}