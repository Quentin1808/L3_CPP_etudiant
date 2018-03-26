#include liste.hpp

#include <iostream>

Noeud::Noeud(int valeur, Noeud* suivant){
  _valeur = valeur;
  _suivant = suivant;
}

Liste::Liste(){
  _tete = nullptr;
}

void Liste::ajouterDevant(int n){
  Noeud* nouveauNoeud = new Noeud(n, _tete);
  _tete = nouveauNoeud;
}

int Liste::getTaille() const{

  int i = 0;
  Noeud * p;
  p = _tete;
  
  while(p != nullptr){
    i++
      p = p->suivant;
  }

  return i;
}

int Liste::getElement(int indice) const{

  int i = 0;
  Noeud * p;
  p = _tete;
  
  while(i != indice){
    i++
      p = p->suivant;
  }
  
  return p->valeur;
}
