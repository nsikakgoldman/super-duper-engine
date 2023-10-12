//
// Created by golman on 10/12/23.
//

#include "Person.h"
#include <iostream>

Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrary_number(arbitrary)
{
    std::cout << "constructing " << firstname << " " << lastname << std::endl;
}

Person::Person() : arbitrary_number(0){
    std::cout<< "constructing "<< getName() << std::endl;
}

std::string Person::getName() {
    return  firstname + " " + lastname;
}

Person::~Person() {
    std::cout<< "destructing " << " "<< firstname<< " "<< lastname<< std::endl;
}
