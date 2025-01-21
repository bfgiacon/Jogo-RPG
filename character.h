#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character{
public:
Character(std::string name) : name_(name) {}
virtual ~Character(){}

virtual void attack() const = 0; 

protected:
std::string name_ = "";
};

#endif