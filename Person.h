//
// Created by golman on 10/12/23.
//
#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;

class Person {
private:
    string firstname;
    string lastname;
    int arbitrary_number;
public:
    Person(string first, string last, int arbitrary);
    Person(); // this tells the compiler to auto handle it declaration
    ~Person(); // adding a destructor
    string getName();
};



