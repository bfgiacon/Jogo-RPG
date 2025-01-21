#ifndef ARQUER_H
#define ARQUER_H

#include "character.h"

class Arquer : public Character{
public:
Arquer(std::string name, int strenght, int health) : Character(name, strenght, health) {}
virtual ~Arquer(){}

void attack() const override;

int setHealth() const override; 


};

#endif
