#ifndef MAGE_H
#define MAGE_H

#include "character.h"

class Mage : public Character{
public:
Mage(std::string name) : Character(name){}
virtual ~Mage() {}

void attack() const override;
};

#endif