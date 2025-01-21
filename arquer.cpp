#include "arquer.h"
#include <iostream>

void Arquer::attack(std::shared_ptr<Character> outro) const{
  std::cout << "Ataque com arco e flecha" << std::endl;
  if(outro->strenght_ > strenght_){
    health_ = health_ - 2;
  } else if(outro->strenght_ == strenght_){
    health_ = health_}
  else {
    outro->strenght_ -= 2;
  }
}

int Arquer::setHealth() const{
  return health_;
}
