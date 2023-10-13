//
// Created by golman on 10/12/23.
//

#include "Person.h"
#include <iostream>
using std::string;
using std::cout;

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrary_number(arbitrary)
{
    std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::Person() : arbitrary_number(0){
    cout<< "constructing "<< getName() << std::endl;
}

string Person::getName() const{
    return  firstname + " " + lastname;
}

Person::~Person() {
    cout<< "destructing " << " "<< firstname<< " "<< lastname<< std::endl;
}

//implementation of the operator overloading

bool Person::operator<(const Person &p) const {
    return arbitrary_number < p.arbitrary_number;
}

bool Person::operator<(int i) const {
    return arbitrary_number < i;
}

bool operator<(int i, Person const& p)
{
    return i < p.arbitrary_number;
}
