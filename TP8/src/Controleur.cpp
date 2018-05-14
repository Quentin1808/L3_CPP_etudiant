#include "Controleur.hpp"

#include "Bouteille.hpp"
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

Controleur::Controleur(int argc, char ** argv) {
  //_inventaire._bouteilles.push_back(Bouteille{"test1", "2018-04-19", 1});
  chargerInventaire();
  _vues.push_back(std::make_unique<VueConsole>(argc, argv, *this));
  _vues.push_back(std::make_unique<VueGraphique>(argc, argv, *this));
  
}

void Controleur::run() {
  for (auto & v : _vues)
    v->run();
}

std::string Controleur::getTexte(){
  std::ostringstream oss;

  oss << _inventaire;

  return oss.str();
}

void Controleur::actualiser() {
  for (auto & v : _vues)
    v->actualiser();
}

void Controleur::chargerInventaire(){
  _inventaire._bouteilles.push_back(Bouteille{"test1", "2018-04-19", 1});
  for(auto & v: _vues){
    v->actualiser();
  }
}
