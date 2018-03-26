#include <gtkmm.h>
int main(int argc, char ** argv) {
    Gtk::Main kit(argc, argv); // application gtkmm
    Gtk::Window window; // fenetre principale
    Gtk::Label label(" Hello world ! "); // message à afficher
    window.add(label);
    window.show_all();
    kit.run(window); // lance la boucle evenementielle return 0;
}
