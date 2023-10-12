//
// Created by golman on 10/12/23.
//

#include "Twitter.h"
#include <iostream>
using std::cout, std::endl;

Twitter::Twitter(std::string first, std::string last, int arbitrary, std::string handle)
:Person(first, last, arbitrary), twitter_handle(handle) {
    cout << "constructing tweeter " << twitter_handle << endl;
}

Twitter::~Twitter() {
    cout<<"destructuring twitter" << endl;
}