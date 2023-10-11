//
// Created by golman on 10/11/23.
//

#include "Account.h"
using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0) {}

vector<string> Account::Report() {
    vector<string> report;
    report.push_back("Balance is $"+ to_string(balance));
    report.push_back("Transactions: ");
    for (auto t : log)
    {
        report.push_back(t.Report());
    }
    report.push_back("______________");
    return report;
}

bool Account::Deposite(int amount) {
    if (amount >= 0)
    {
        balance += amount;
        log.push_back(Transaction(amount, "Withdraw"));
        return true;
    }
    else
    {
        return false;
    }
}

bool Account::Withdraw(int amount)
{
    if (amount <= 0)
    {
        return false;
    }
    if (balance >= amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        return true;
    }
    return false;
}