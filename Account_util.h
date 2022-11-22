#pragma once
#include "Saving_account.h"
#include <iostream>
#include <vector>
#include <string>


// Account
void display(const std::vector <Account>& accounts);
void deposit(std::vector <Account>& accounts, double amount);
void withdraw(std::vector <Account>& accounts, double amount);
// Saving Account
void display(const std::vector <Saving_account>& accounts);
void deposit(std::vector <Saving_account>& accounts, double amount);
void withdraw(std::vector <Saving_account>& accounts, double amount);