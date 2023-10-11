//
// Created by golman on 10/11/23.
//

#include "Transaction.h"

using std::string;
using std::to_string;

Transaction::Transaction(int amt, std::string kind) :amount(amt), type(kind) {}

string Transaction::Report() {
    string report;
    report += " ";
    report += type;
    report += " ";
    report += to_string(amount);

    return report;
}
