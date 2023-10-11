//
// Created by golman on 10/11/23.
//
#include <vector>
#include <string>
#include "Transaction.h"

#ifndef SUPER_DUPER_ENGINE_ACCOUNT_H
#define SUPER_DUPER_ENGINE_ACCOUNT_H


class Account {
private:
    int balance;
    std::vector<Transaction> log;
public:
    Account();
    std::vector<std::string> Report();
    bool Deposite(int amount);
    bool Withdraw(int amount);
    int GetBalance() { return balance;}
};


#endif //SUPER_DUPER_ENGINE_ACCOUNT_H
