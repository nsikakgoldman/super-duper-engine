//
// Created by golman on 10/12/23.
//

#include "Person.h"
#include <iostream>

Person::Person(string first, string last, int arbitrary) : firstname(first), lastname(last), arbitrary_number(arbitrary)
{
    std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::Person() : arbitrary_number(0){
    cout<< "constructing "<< getName() << std::endl;
}

string Person::getName() {
    return  firstname + " " + lastname;
}

Person::~Person() {
    cout<< "destructing " << " "<< firstname<< " "<< lastname<< std::endl;
}
