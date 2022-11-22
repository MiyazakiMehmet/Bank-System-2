#include "Saving_account.h"

Saving_account::Saving_account(std::string name, double balance, double interest_rate)
	: Account(name,balance), interest_rate{interest_rate}{}

bool Saving_account::deposit(double amount) {
	amount += amount * interest_rate;
	return Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& stream, const Saving_account& source) {
	stream << "Account: " << source.name << "\nAccount current balance: " << source.balance << "\nInterest rate: " << source.interest_rate;
	return stream;
}