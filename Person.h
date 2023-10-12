//
// Created by golman on 10/12/23.
//
#pragma once
#include <string>

class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrary_number;
public:
    Person(std::string first, std::string last, int arbitrary);
    Person() = default; // this tells the compiler to auto handle it declaration
    std::string getName();
};



