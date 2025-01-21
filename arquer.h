#ifndef ARQUER_H
#define ARQUER_H

#include "character.h"

class Arquer : public Character{
public:
Arquer(std::string name) : Character(name) {}
virtual ~Arquer(){}

void attack() const override;
};

#endif