#include <fstream>
#include "Image.hpp"
#include <cmath>
#include <string>

Image::Image(int largeur, int hauteur) :
  _largeur(largeur), _hauteur(hauteur)
{}

int Image::getLargeur() const{
  return _largeur;
}

int Image::getHauteur() const{
  return _hauteur;
}

int Image::getPixel(int i, int j) const{
  return _pixels[_largeur * i + j];
}

void Image::setPixel(int i, int j, int couleur){
  _pixels[_largeur * i + j] = couleur;
}

Image::~Image(){
  delete[] _pixels;
}

void remplir(Image & img){

  for(int i = 0; i < img.getHauteur(); i++){
    for(int j = 0; j < img.getLargeur(); j++){
      double cosVal = ((std::cos((float)j / 10) + 1)/2)*255;
      img.setPixel(i,j,std::floor(cosVal) );
    }
  }

}

void ecrirePnm(const Image& img, const std::string& nomFichier){
    std::ofstream file(nomFichier, std::ofstream::out);
    if(!file){
        throw std::string("erreur : impossible d'écrire le fichier");
    }
    
    const int largeur = img.getLargeur();
    const int hauteur = img.getHauteur();

    file << "P2" << std::endl;
    file << largeur << " " << hauteur << std::endl;
    file << "255" << std::endl;
    for(int i = 0; i < hauteur; i++){
        for(int j = 0; j < largeur; j++){
            file << img.getPixel(i, j) << " ";           
        }
        file << std::endl;
    }
}

Image bordure(const Image & img, int couleur, int epaisseur){

    Image imgB(img);
    for(int i = 0; i < img.getHauteur(); i++){
      for(int j = 0; j < img.getLargeur() ; j++){
	if( i < epaisseur || j < epaisseur || i > img.getHauteur()-10 || j > img.getLargeur()-10){
	  imgB.setPixel(i,j, couleur);
	}
      }
    }
    return imgB;
}

/*
Image::Image(const Image & img):
  Image(img.getLargeur(), img.getHauteur())
{
  for(int i = 0; i < img.getHauteur(); i++){
    for(int j = 0; j < img.getLargeur() ; j++){
      Pixel(i,j) = img.Pixel(i,j);
    }
  }
}
*/
