#include "mainwin.h"
#include <iostream>

Mainwin::Mainwin(Store& store) : _store{store}
{
    // /////////////////
    // G U I   S E T U P
    // /////////////////

    set_default_size(800, 400);
    set_title("Soccer Cart");

    // Put a vertical box container as the Window contents
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    // ///////
    // M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    //     F I L E
    // Create a File menu and add to the menu bar
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    //         Q U I T
    // Append Quit to the File menu
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_quit_click));
    filemenu->append(*menuitem_quit);

    //        View
    // Create a View menu and add to the menu bar
    Gtk::MenuItem *menuitem_view = Gtk::manage(new Gtk::MenuItem("_View", true));
    menubar->append(*menuitem_view);
    Gtk::Menu *viewmenu = Gtk::manage(new Gtk::Menu());
    menuitem_view->set_submenu(*viewmenu);

    //        List 
    Gtk::MenuItem *menuitem_list = Gtk::manage(new Gtk::MenuItem("_List", true));
    menuitem_list->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_view_all_click));
    viewmenu->append(*menuitem_list);

    //     Create
    // Create a Create menu and add to the menu bar
    Gtk::MenuItem *menuitem_create = Gtk::manage(new Gtk::MenuItem("_Design", true));
    menubar->append(*menuitem_create);
    Gtk::Menu *createmenu = Gtk::manage(new Gtk::Menu());
    menuitem_create->set_submenu(*createmenu);

    //        J A V A
    // Append Java to the Create menu
    Gtk::MenuItem *menuitem_jersey = Gtk::manage(new Gtk::MenuItem("_Jersey", true));
    menuitem_jersey->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_create_jersey_click));
    createmenu->append(*menuitem_jersey);

    //         Donut
    // Append Donut to the Creaet menu
    Gtk::MenuItem *menuitem_ball = Gtk::manage(new Gtk::MenuItem("_Ball", true));
    menuitem_ball->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_create_ball_click));
    createmenu->append(*menuitem_ball);

    Gtk::MenuItem *menuitem_shinpad = Gtk::manage(new Gtk::MenuItem("_Shinpad", true));
    menuitem_shinpad->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_create_shinpad_click));
    createmenu->append(*menuitem_shinpad);

    Gtk::MenuItem *menuitem_cleat = Gtk::manage(new Gtk::MenuItem("_Cleats", true));
    menuitem_cleat->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_create_cleat_click));
    createmenu->append(*menuitem_cleat);

    //     Help
    // Create a Help menu and add to the menu bar
    Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);

    /*//         Help
    // Append Help to the Help menu
    Gtk::MenuItem *menuitem_help2 = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menuitem_help2->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_help_click));
    helpmenu->append(*menuitem_help2);*/

    //         About
    // Append Help to the Help menu
    Gtk::MenuItem *menuitem_about = Gtk::manage(new Gtk::MenuItem("_About", true));
    menuitem_about->signal_activate().connect(sigc::mem_fun(*this, &Mainwin::on_about_click));
    helpmenu->append(*menuitem_about);

     // /////////////
    // T O O L B A R
    // Add a toolbar to the vertical box below the menu
    Gtk::Toolbar *toolbar = Gtk::manage(new Gtk::Toolbar);
    vbox->add(*toolbar);

    // Make the box and everything in it visible
    vbox->show_all();
}

Mainwin::~Mainwin() { };

void Mainwin::on_quit_click(){
    hide();
}

void Mainwin::on_view_all_click(){

}

void Mainwin::on_create_jersey_click(){

}

void Mainwin::on_create_ball_click(){

}

void Mainwin::on_create_cleat_click(){

}

void Mainwin::on_create_shinpad_click(){

}

void Mainwin::on_about_click(){

}