#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character{
public:
Character(std::string name, int strenght, int health) : name_(name), strenght_(strenght), health_(health) {}
virtual ~Character(){}

virtual void attack() const = 0; 

virtual int setHealth() const = 0;

protected:
std::string name_ = "";
int strenght_ = 0;
int health_ = 0;
};

#endif
