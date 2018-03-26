#ifndef LISTE_HPP
#define LISTE_HPP

#include <iostream>

struct Noeud{
  int _valeur;
  Noeud* _suivant;

  Noeud(int valeur, Noeud* suivant);
};

struct Liste{
  Noeud* _tete;

  Liste();
  void ajouterDevant(int n);
  int getTaille() const;
  int getElement(int indice) const;
};
