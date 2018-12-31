
#include "pch.h"
#include <iostream>

#include <limits>
#include <climits>
#include <cfloat>

#include <vector>
#include <string>
#include <locale>     
#include <set> 

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

void renderGuiOptions() {
	cout << "\n\nSection 9 90 Challenge - collection of numbers \n" << endl;

	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
}

char userChoiceToLower() {
	locale loc;
	char userChoice{};
	char userChoiceAfterMod{};

	cout << "\nEnter your choice: ";
	cin >> userChoice;

	// convert to lowercase																													... we use the <locale> lib
	// check if the input is of the 6 possible chars ( add it to a enum list etc )	... we use a switch based on the enum for that
	// no need to check that the length is == 1																			... we store the value into an char

	userChoiceAfterMod = tolower(userChoice, loc);
	cout << "Your choice is: " << userChoiceAfterMod << endl;
	return userChoiceAfterMod;
}

enum GuiOption : char {
	P = 'p',
	A = 'a',
	M = 'm',
	S = 's',
	L = 'l',
	Q = 'q',
};

void printVector(vector<int> const &input, bool useForLoopElseForRangeLoopFlag)
{
	if (useForLoopElseForRangeLoopFlag) {
		cout << "[ ";
		for (int i = 0; i < input.size(); i++) {
			cout << input.at(i) << ' ';
		}
		cout << "]" << endl;
	}
	else {

		cout << "[ ";
		for (int i : input) {
			cout << i << ' ';
		}
		cout << "]" << endl;
	}

}

void printVectorMean(vector<int> const &input)
{
	int vectorSum{ 0 };
	int mean{ 0 };
		for (int i = 0; i < input.size(); i++) {
			vectorSum += input.at(i);
		}
		mean = (vectorSum / input.size());
		cout << "The mean is: " << mean << endl;
}

void printVectorSmallest(vector<int> const &input)
{
	int vectorSmallest{ 0 };
	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) < vectorSmallest) {
			vectorSmallest = input.at(i);
		}
	}
	cout << "The smallest number is: " << vectorSmallest << endl;
}

void printVectorLargest(vector<int> const &input)
{
	int vectorLargest{ 0 };
	for (int i = 0; i < input.size(); i++) {
		if (input.at(i) > vectorLargest) {
			vectorLargest = input.at(i);
		}
	}
	cout << "The largest number is: " << vectorLargest << endl;
}

int main()
{


	vector<int> vec = { 10,-10,100,500 };
	char userChoice;
	int userChoiceInt{ 0 };


	do {

		renderGuiOptions();
		userChoice = userChoiceToLower();

		if (static_cast<char>(P) == userChoice) {

			if (vec.size() == 0) {
				cout << "[] - the list is empty" << endl;
			}
			else {
				printVector(vec, false);
			}


		}
		else if (static_cast<char>(A) == userChoice) {
			cout << "add your INT" << endl;
			cin >> userChoiceInt;
			vec.push_back(userChoiceInt);
			cout << userChoiceInt << " added" << endl;
		}
		else if (static_cast<char>(M) == userChoice) {
			printVectorMean(vec);
		}
		else if (static_cast<char>(S) == userChoice) {
			printVectorSmallest(vec);
		}
		else if (static_cast<char>(L) == userChoice) {
			printVectorLargest(vec);
		}
		else {
			cout << "Enter an valid char please.. try again" << endl;
		}

	} while (static_cast<char>(Q) != userChoice);

}

