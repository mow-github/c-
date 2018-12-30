

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


int calculate_pairs(vector<int> vec) {
	int result{};
	
	// nested for loop here
	for (size_t i = 0; i < vec.size(); ++i) {

		cout << "\n--> Outer iteration: " << (i+1) << endl;


		for (size_t j = i + 1; j < vec.size(); ++j) {

			cout << "\n\t--> Current: " << vec.at(i) << " * " << vec.at(j) << " = " << (vec.at(i) * vec.at(j)) << endl;


			result = result + vec.at(i) * vec.at(j);
		}
	}

	return result;
}


int main()
{
		cout << "Nested Loops - Sum of Product of all pairs of vector elements \n"; 


		//vector<int> vec1 = {1,2,3};
		vector<int> vec1 = {2,4,6,8};

		int result = calculate_pairs(vec1);
		cout << "\n--> Result: " << result << endl;



}

