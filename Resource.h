//
// Created by golman on 10/13/23.
//

#ifndef SUPER_DUPER_ENGINE_RESOURCE_H
#define SUPER_DUPER_ENGINE_RESOURCE_H

#include <string>

class Resource {
private:
    std::string name;
public:
    Resource(std::string n);
    ~Resource(void);
    std::string GetName() const {return name;}
};


#endif //SUPER_DUPER_ENGINE_RESOURCE_H
