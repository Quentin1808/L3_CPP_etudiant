#include "ZoneDessin.hpp"
#include "PolygoneRegulier.hpp"
#include <cstdlib>

ZoneDessin::ZoneDessin()
{
  add_events(Gdk::BUTTON_PRESS_MASK);
  signal_button_press_event().connect(sigc::mem_fun(*this, &ZoneDessin::gererClic));
  //on pourrait aussi override on_clicked
}

ZoneDessin::~ZoneDessin(){
  for(FigureGeometrique* fig: _figures){
    delete fig;
  }
}

bool ZoneDessin::on_expose_event(GdkEventExpose* event){
  (void) event;
  
  Glib::RefPtr<Gdk::Window> window = get_window();
  if(window){
    Cairo::RefPtr<Cairo::Context> context = window->create_cairo_context();
    
    for(FigureGeometrique* fig: _figures){
      fig->afficher(context);
    }
    context->stroke();
  }
  return true;
}

bool ZoneDessin::gererClic(GdkEventButton* event){
  Glib::RefPtr<Gdk::Window> window = get_window();
  if(window){
      if(event->button == 1){ //left
          _figures.push_back(new PolygoneRegulier(Couleur{1,0,0}, Point{std::floor(event->x), std::floor(event->y)}, std::rand() % 100 + 20, std::rand() % 10 + 3));
      }else if(event->button == 3){ //right
          if(_figures.size() > 0)
              _figures.pop_back();
      }
    window->invalidate(true);
  }
  
  return true;
}
