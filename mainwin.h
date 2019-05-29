#ifndef _MAINWIN_H
#define _MAINWIN_H

#include <gtkmm.h>
#include <iostream>
#include "store.h"

class Mainwin : public Gtk::Window {
private:
    Store& _store;
    Gtk::Label *msg;
    Gtk::MenuItem *menuitem_new_cleat;
    Gtk::MenuItem *menuitem_new_ball;
    Gtk::MenuItem *menuitem_new_shinpad;
    Gtk::MenuItem *menuitem_new_jersey;
protected:
    void on_quit_click();
    void on_view_all_click();
    void on_create_jersey_click();
    void on_create_ball_click();
    void on_create_cleat_click();
    void on_create_shinpad_click();
     void on_about_click();
    // std::string on_help_click();
public:
    Mainwin(Store& store);
    virtual ~Mainwin();
};


#endif