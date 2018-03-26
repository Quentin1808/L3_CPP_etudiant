#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>

class Client {
private:
  int _id;
  std::string _nom;
  
public:
  Client(int id, const std::string & nom);
  int getId() const;
  const std::string & getNom() const;
  void afficherClient() const;
  void supprimerClient(int idClient);
};
#endif
