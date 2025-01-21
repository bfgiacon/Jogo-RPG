#ifndef WARRIOR_H
#define WARRIOR_H

#include "character.h"

class Warrior : public Character{
public:
Warrior(std::string name, int strenght, int health) : Character(name, strenght, health)
virtual ~Warrior(){}

void attack() const override;

int setHealth() const override;

};
#endif
