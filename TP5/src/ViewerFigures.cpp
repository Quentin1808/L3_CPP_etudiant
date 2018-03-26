#include "ViewerFigures.hpp"

ViewerFigures::ViewerFigures(int argc, char** argv)
  : _kit(argc, argv)
{
  _window.set_default_size(640, 480);
  _window.set_title("LA BELLE FENÊTRE");
  _window.add(_dessin);
  _window.show_all();
}

void ViewerFigures::run(){
  _kit.run(_window);
}
