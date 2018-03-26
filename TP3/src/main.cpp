#include <iostream>
#include "Location.hpp"
#include "Client.hpp"
#include "Produit.hpp"
#include "Magasin.hpp"

int main(){

  Client c1 (1, "PRUVOST");
  std::cout << c1.getId() << std::endl;
  std::cout << c1.getNom() << std::endl;
  c1.afficherClient();

  std::cout << "----------" << std::endl;

  Produit p1(1, "Prod");
  std::cout << p1.getId() << std::endl;
  std::cout << p1.getDescription() << std::endl;
  p1.afficherProduit();

  std::cout << "----------" << std::endl;

  Magasin m1;
  m1.ajouterClient("LECLET");
  m1.ajouterClient("PRUVOST");
  std::cout << m1.nbClients() << std::endl;
  m1.afficherClients();
  m1.supprimerClient(3);
  std::cout << m1.nbClients() << std::endl;
  m1.afficherClients();

  std::cout << "----------" << std::endl;

  m1.ajouterProduit("Produit 1");
  m1.ajouterProduit("Produit 2");
  std::cout << m1.nbProduits() << std::endl;
  m1.afficherProduits();
  m1.supprimerProduit(3);
  std::cout << m1.nbProduits() << std::endl;
  m1.afficherProduits();

  std::cout << "----------" << std::endl;

  
}
