//
// Created by golman on 10/12/23.
//

#include "Person.h"

Person::Person(std::string first, std::string last, int arbitrary) : firstname(first), lastname(last), arbitrary_number(arbitrary)
{
}

std::string Person::getName() {
    return  firstname + " " + lastname;
}
