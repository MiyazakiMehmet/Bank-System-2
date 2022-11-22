#include "Account_util.h"


void display(const std::vector <Account>& accounts) {
	for (const auto& c : accounts)
		std::cout << c << std::endl;
}

void deposit(std::vector <Account>& accounts, double amount) {
	for (auto& c : accounts)
		if (c.deposit(amount))
			std::cout << "Deposit Succesful! (Amount: " << amount << ")" << std::endl;
		else
			std::cout << "Deposit Failed! (Amount: " << amount << ")" << std::endl;
}

void withdraw(std::vector <Account>& accounts, double amount) {
	for (auto& c : accounts)
		if (c.withdraw(amount))
			std::cout << "Withdraw Succesful! (Amount: " << amount << ")" << std::endl;
		else
			std::cout << "Withdraw Failed!";

}

void display(const std::vector <Saving_account>& accounts) {
	for (const auto& c : accounts)
		std::cout << c << std::endl;
}

void deposit(std::vector <Saving_account>& accounts, double amount) {
	for (auto& c : accounts)
		if (c.deposit(amount))
			std::cout << "Deposit Successful! (Amount: " << amount << ")" << std::endl;
		else
			std::cout << "Deposit Failed!" << std::endl;
}

void withdraw(std::vector <Saving_account>& accounts, double amount) {
	for(auto& c : accounts)
		if(c.withdraw(amount))
			std::cout << "Withdraw Succesful! (Amount: " << amount << ")" << std::endl;
		else
			std::cout << "Withdraw Failed!";
}