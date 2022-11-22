#include "Account.h"

Account::Account(std::string name, double balance)
	: name{name},balance{balance} {}

double Account::get_balance() const {
	return balance;
}

bool Account::deposit(double amount) {
	if(amount < 0)
		return false;
	balance += amount;
	return true;
}

bool Account::withdraw(double amount) {
	if(balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	return false;
}

std::ostream& operator<<(std::ostream& stream, const Account& source) {
	stream << "Account: " << source.name << "\nAccount current balance: " << source.balance;
	return stream;
}