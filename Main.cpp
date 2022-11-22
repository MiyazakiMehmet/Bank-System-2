#include "Account.h"
#include "Saving_account.h"
#include "Account_util.h"



int main() {
	std::vector <Account> accounts;
	accounts.push_back(Account("Mehmet", 10000.0));
	accounts.push_back(Account("Adnan", 14000.0));
	display(accounts);
	deposit(accounts, 1000.0);
	withdraw(accounts, 8000.0);
	std::cout << "\n\n";
	display(accounts);

	std::cout << "\n\n";

	std::vector <Saving_account> accounts2;
	accounts2.push_back(Saving_account("Ali", 8000.0, 0.035));
	accounts2.push_back(Saving_account("Han", 12000.0, 0.035));
	display(accounts2);
	deposit(accounts2, 2000);
	withdraw(accounts2, 4300);
	std::cout << "\n\n";
	display(accounts2);

	return 0;
}