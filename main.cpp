#include "store.h"
#include "mainwin.h"
#include <gtkmm.h>
#include <iostream>

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "kunal19899");
    
    Gtk::Main kit(argc, argv);
    Store store;
    Mainwin win(store);

    return app->run(win);   
}