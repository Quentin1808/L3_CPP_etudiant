#ifndef ZONEDESSIN_HPP
#define ZONEDESSIN_HPP

#include <gtkmm.h>
#include <vector>
#include "FigureGeometrique.hpp"

class ZoneDessin: public Gtk::DrawingArea{
private:
  std::vector<FigureGeometrique*> _figures;
public:
  ZoneDessin();
  ~ZoneDessin();
protected:
  bool on_expose_event(GdkEventExpose* event);
  bool gererClic(GdkEventButton* event);
};

#endif
