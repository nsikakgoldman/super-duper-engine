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
    ~Person();
    std::string GetName() const;
    int GetNumber() const {return arbitrary_number;}
    void SetNumber(int number) {arbitrary_number = number;}
};



