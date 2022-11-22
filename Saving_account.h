#pragma once
#include "Account.h"


class Saving_account : public Account {
protected:
	double interest_rate;
public:
	Saving_account(std::string name, double balance, double interest_rate);
	bool deposit(double amount);
	friend std::ostream& operator<<(std::ostream& stream, const Saving_account& source);
};