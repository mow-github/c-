
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

void testRenderEveryCharInAString(string myMessageRaw, bool useForRangeSyntaxFlag = true) {

	if (useForRangeSyntaxFlag) {
		cout << "Execute for-range logic: " << endl;

		for (char currentCharacter : myMessageRaw)
		{
			cout << currentCharacter << " ";
		}
		cout << endl;

	}
	else {
		cout << "Execute for-loop logic: " << endl;

		for (size_t i = 0; i < myMessageRaw.size(); i++)
		{
			cout << myMessageRaw[i] << " ";
		}
		cout << endl;
	}
}


void testEncryptLogic(string alphabet, string key) {
	// Test encrypt logic
	//
	string c = "a";
	auto currentCharacterPosition = alphabet.find(c);

	cout << currentCharacterPosition << endl;
	cout << key[currentCharacterPosition] << endl;
}

int main()
{
	cout << "\n\nSection 10 99 - strings encrypt decrypt string \n" << endl;

	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

	string myMessageRaw = { "Hello man, wzup" };
	string myMessageEncrypted = {};
	string myMessageDecrypted = {};

	//testRenderEveryCharInAString(myMessageRaw, false);
	//testEncryptLogic(alphabet, key);


	cout << "myMessageRaw: " << myMessageRaw << endl;

	// Encrypt Message
	for (char currentCharacter : myMessageRaw)
	{
		auto currentCharacterPosition = alphabet.find(currentCharacter);

		if (currentCharacterPosition != string::npos) {
			//cout << "Found: " << currentCharacterPosition << endl;
			myMessageEncrypted += key[currentCharacterPosition];
		}
		else {
			//cout << "Not Found: " << currentCharacterPosition << endl;
			myMessageEncrypted += currentCharacter;
		}
	}
	cout << "myMessageEncrypted: " << myMessageEncrypted << endl;



	// Decrypt Message
	for (char currentCharacter : myMessageEncrypted)
	{
		auto currentCharacterPosition = key.find(currentCharacter);

		if (currentCharacterPosition != string::npos) {
			//cout << "Found: " << currentCharacterPosition << endl;
			myMessageDecrypted += alphabet[currentCharacterPosition];
		}
		else {
			//cout << "Not Found: " << currentCharacterPosition << endl;
			myMessageDecrypted += currentCharacter;
		}
	}
	cout << "myMessageDecrypted: " << myMessageDecrypted << endl;





}
