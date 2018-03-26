#include "Client.hpp"

Client::Client(int id, const std::string & nom) :
  _id(id),_nom(nom)
{}

int Client::getId() const {
  return _id;
}

const std::string & Client::getNom() const {
  return _nom;
}

void Client::afficherClient() const {
  std::cout << "Client (" << _id << "," << _nom << ")"  << std::endl;
}
