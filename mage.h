#ifndef MAGE_H
#define MAGE_H

#include "character.h"

class Mage : public Character{
public:
Mage(std::string name, int strenght, int health) : Character(name, strenght, health)
virtual ~Mage() {}

void attack() const override;

int setHealth() const override;
};

#endif
