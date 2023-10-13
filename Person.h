//
// Created by golman on 10/12/23.
//
#pragma once
#include <string>
#include <iostream>

class Person {
private:
    std::string firstname;
    std::string lastname;
    int arbitrary_number;
    // make the private arbitrary number accesible by as free function
    friend bool operator<(int i, Person const& p);
public:
    Person(std::string first, std::string last, int arbitrary);
    Person(); // this tells the compiler to auto handle it declaration
    ~Person(); // adding a destructor
    std::string getName() const;
    int GetNumber() const {return arbitrary_number;}
    void SetNumber(int number) {arbitrary_number = number;}
    // the operator over loading code come here
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};
bool operator<(int i, Person const& p);