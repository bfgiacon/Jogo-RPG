#ifndef PLAY_H
#define PLAY_H

#include <memory>
#include <vector>
#include <string>
#include "character.h"
#include "warrior.h"
#include "mage.h"
#include "arquer.h"


class Play{
public:

void addWarrior(std::shared_ptr<Warrior> warrior);

void addMage(std::shared_ptr<Mage> mage);

void addArquer(std::shared_ptr<Arquer> arquer);

std::vector<std::shared_ptr<Character>> allCharacters_ = {};
};



#endif