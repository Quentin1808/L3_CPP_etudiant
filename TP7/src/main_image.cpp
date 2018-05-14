#include "Image.hpp"
#include <gtkmm.h>
#include <iostream>

int main(int argc, char** argv){
  Image image(800,600);
  remplir(image);
  Image image_bordure = bordure(image, 0, 10);
  try{
    ecrirePnm(image_bordure, "test.pnm");
  }catch(std::string exception){
    std::cout << exception << std::endl;
  }

  Gtk::Main kit(argc, argv);
  Gtk::Window window;
  Gtk::Image img;
  img.set("test.pnm");
  window.add(img);
  window.show_all();
  kit.run(window);
  return 0;
}
