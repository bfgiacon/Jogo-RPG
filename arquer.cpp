#include "arquer.h"
#include <iostream>

void Arquer::attack() const{
  std::cout << "Ataque com arco e flecha" << std::endl;
}

int Arquer::setHealth() const{
  return health_;
}
