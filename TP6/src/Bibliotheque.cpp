#include <iostream>
#include "Bibliotheque.hpp"

void Bibliotheque::afficher() const{
  
}

void Bibliotheque::trierParAnnee(){
  auto fet = [](const Livre &l1, const Livre &l2)
    { return l1.getAnnee < l2.getAnnee();}

  std::sort(begin(), end(), fet);
}
