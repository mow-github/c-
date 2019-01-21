#include "pch.h"
#include "AccountTest.h"

#include <iostream>



void AccountTest::set_balance(double bal) {
	balance = bal;
}

double AccountTest::get_balance() {
	return balance;
};


void AccountTest::test_console_write_balance() {
	std::cout << "Current balance is: " << get_balance() << std::endl;
}
