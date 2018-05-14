#include "Inventaire.hpp"

#include "Bouteille.hpp"
#include <locale>
#include <fstream>
#include <istream>
#include <string>

std::ostream & operator << (std::ostream& flux, const Inventaire& inventaire){
  std::locale vieuxLoc = std::locale::global(std::locale("fr_FR.UTF-8"));

  for(Bouteille b : inventaire._bouteilles){
    flux << b;
  }

  std::locale::global(vieuxLoc);
  return flux;
}
