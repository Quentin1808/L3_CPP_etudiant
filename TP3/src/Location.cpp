#include "Location.hpp"

void Location::afficherLocation() const{
  std::cout << "Location (" << _idClient << "," << _idProduit << ")" << std::endl;
}
