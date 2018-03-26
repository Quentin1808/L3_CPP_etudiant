#include <iostream>
#include <vector>
#include "Ligne.hpp"
#include "PolygoneRegulier.hpp"
#include "FigureGeometrique.hpp"

int main(){

  std::vector<FigureGeometrique*> figuressGeometrique;

 figuressGeometrique .push_back(new PolygoneRegulier(Couleur{0,0,0}, Point{100, 200}, 50, 5));
 figuressGeometrique.push_back(new Ligne(Couleur{0,0,0}, Point{0, 100}, Point{100, 200}));
    
  for(FigureGeometrique* figure: figuressGeometrique){
    figure->afficher();
  }

  for(auto figure: figuressGeometrique) delete figure;

  return 0;
}
