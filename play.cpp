#include "play.h"

#include <string>
#include <vector>
#include <memory>

void Play::addWarrior(std::shared_ptr<Warrior> warrior) {
  if (warrior != nullptr) {
    allCharacters_.push_back(warrior);
  }
}
void Play::addMage(std::shared_ptr<Mage> mage) {
  if (mage != nullptr) {
    allCharacters_.push_back(mage);
  }
}
void Play::addArquer(std::shared_ptr<Arquer> arquer) {
  if (arquer != nullptr) {
    allCharacters_.push_back(arquer);
  }
}