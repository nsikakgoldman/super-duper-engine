//
// Created by golman on 10/12/23.
//

#pragma once
#include "Person.h"
#include <string>


class Twitter: public Person{
private:
    std::string twitter_handle;
public:
    Twitter(std::string first, std::string last, int arbitrary, std::string handle);
    ~Twitter();
};

