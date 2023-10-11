//
// Created by golman on 10/11/23.
//

#ifndef SUPER_DUPER_ENGINE_TRANSACTION_H
#define SUPER_DUPER_ENGINE_TRANSACTION_H
#include <string>

class Transaction {
private:
    int amount;
    std::string type;
public:
    Transaction(int amt, std::string kind);
    std::string Report();
};


#endif //SUPER_DUPER_ENGINE_TRANSACTION_H
