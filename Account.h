#pragma once
#include <iostream>
#include <vector>
#include <string>

class Account {
protected:
	std::string name;
	double balance;
public:
	Account(std::string name, double balance);
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_balance() const;
	friend std::ostream& operator<<(std::ostream& stream, const Account& source);
};