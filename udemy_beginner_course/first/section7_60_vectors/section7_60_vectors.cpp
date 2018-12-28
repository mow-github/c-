
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
	// ---------------- section 7 60 arrays

	vector<int> vector1;
	vector<int> vector2;

	vector<vector<int>> vector_2d;
	string vector2dName = "Vector_2d";


	vector1.push_back(1000);
	vector1.push_back(20);
	vector1.push_back(30);


	cout << "Vector1 output: " << endl;
	cout << "Vector1 at pos. 0: \t" << vector1.at(0) << endl;
	cout << "vector1 at pos. 1: \t" << vector1.at(1) << endl;
	cout << "vector1 size: \t" << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "\n Vector2 output: " << endl;
	cout << "Vector2 at pos. 0: \t" << vector2.at(0) << endl;
	cout << "vector2 at pos. 1: \t" << vector2.at(1) << endl;
	cout << "vector2 size: \t" << vector2.size() << endl;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);


	cout << "\n " << vector2dName << " output: " << endl;
	cout << vector2dName << " at pos. 0,0: \t" << vector_2d.at(0).at(0) << endl;
	cout << vector2dName << " at pos. 0,1: \t" << vector_2d.at(0).at(1) << endl;
	cout << vector2dName << " at pos. 1,1: \t" << vector_2d.at(1).at(0) << endl;
	cout << vector2dName << " at pos. 1,1: \t" << vector_2d.at(1).at(1) << endl;

	cout << vector2dName << " size Rows: \t" << vector_2d.size() << endl;
	cout << vector2dName << " size Col nr 1: \t" << vector_2d.at(0).size() << endl;
	cout << vector2dName << " size Col nr 2: \t" << vector_2d.at(1).size() << endl;



	// ----------------

}

