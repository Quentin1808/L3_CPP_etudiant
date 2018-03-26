#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>

class Produit {
private:
  int _id;
  std::string _description;

public:
  Produit(int id, const std::string & description);
  int getId() const;
  const std::string & getDescription() const;
  void afficherProduit() const;
};

#endif
