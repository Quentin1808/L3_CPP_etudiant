#ifndef IMAGE_HPP
#define IMAGE_HPP
#include <string>

class Image{
private:
  int _largeur;
  int _hauteur;
  int* _pixels;

public:
  Image(int largeur, int hauteur);
  int getLargeur() const;
  int getHauteur() const;
  int getPixel(int i, int j) const;
  void setPixel(int i, int j, int couleur);
  ~Image();
  /* Image(const Image & img);*/
  
};

void ecrirePnm(const Image & img, const std::string & nomFichier);
void remplir(Image & img);
Image bordure(const Image & img, int couleur, int epaisseur);
#endif
