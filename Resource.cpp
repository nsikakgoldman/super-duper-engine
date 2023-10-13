//
// Created by golman on 10/13/23.
//

#include "Resource.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Resource::Resource(std::string n): name(n)
{
    cout << "constructing " << name << endl;
}

Resource::~Resource(void)
{
    cout << "destructuring "<< name << endl;
}
