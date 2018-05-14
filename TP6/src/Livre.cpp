#include "Livre.hpp"
#include <iostream>

Livre::Livre(const std::string& titre, const std::string& auteur, int annee) :
  _annee(annee)
{
  std::string const pT = titre.find(";");
  std::string const rT = titre.find("\n");
  std::string const aA = auteur.find(";");
  std::string const cA = auteur.find("\n");
  if(pT != std::string::npos || rT != std::string::npos){
    throw 1339;
  }else{
    _titre = titre;
  }

  if(aA != std::string::npos || cA != std::string::npos){
    throw 1339;
  }else{
    _auteur = auteur;
  }
  
}

const std::string& Ligne::getTitre() const{
  return _titre;
}

const std::string& Ligne::getAuteur() const{
  return _auteur;
}

int Ligne::getAnnee() const{
  return _annee;
}

bool Livre::operator < (const Livre& l) const{

  if(this->_auteur < l.getAuteur()){
    return true;
  }else if(this->_auteur == l.getAuteur()){
    if(this->_titre < l.getTitre()){
      return true;
    }
  }
  return false;
}

bool Livre::operator == (const & Livre l1, const & Livre l2){

  return (l1.getAuteur == l2.getAuteur() and l1.getTitre() == l2.getTitre());
    
}

std::ostream& Livre::operator<<(std::ostream& flux, const Livre& livre){
    flux << livre.getTitre() << ";" << livre.getAuteur() << ";" << livre.getAnnee();
    return flux;
}

std::istream& Livre::operator>>(std::istream& flux, Livre& livre){
    std::string line;
    std::getline(flux, line);
    std::istringstream iss(line);
    std::string token;
    std::getline(iss, token, ';');
    livre._titre = token;       
    std::getline(iss, token, ';');
    livre._auteur = token;
    iss >> livre._annee;
    return flux;
}
