#ifndef WARRIOR_H
#define WARRIOR_H

#include "character.h"

class Warrior : public Character{
public:
Warrior(std::string name) : Character(name){}
virtual ~Warrior(){}

void attack() const override;

};
#endif