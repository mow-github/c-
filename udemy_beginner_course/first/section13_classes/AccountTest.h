#ifndef _ACCOUNTTEST_H_
#define _ACCOUNTTEST_H_

class AccountTest {
private:
	double balance;
public:
	void set_balance(double bal);
	double get_balance();
	void test_console_write_balance();
};

#endif // !_ACCOUNTTEST_H_
