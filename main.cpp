#include "character.h"
#include "warrior.h"
#include "mage.h"
#include "arquer.h"
#include "play.h"

#include <memory>
#include <vector>
#include <iostream>

int main(){
Play game;
auto warrior = std::make_shared<Warrior>("Warrior");
auto arquer = std::make_shared<Arquer>("Arquer");
auto mage = std::make_shared<Mage>("Mage");
game.addWarrior(warrior);
game.addArquer(arquer);
game.addMage(mage);
game.allCharacters_[0]->attack();
game.allCharacters_[1]->attack();
game.allCharacters_[2]->attack();

  
}