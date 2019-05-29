#include <iostream>
#include "cleat.h"
#include <string>

Cleat::Cleat(string name, double price, double cost, Color color, Design design, LaceType laceType) :
    Product{name, price, cost}, _color{color}, _design{design}, _laceType{laceType} { }

Color Cleat::getColor() const{
    return _color;
}

Design Cleat::getDesign() const{
    return _design;
}

LaceType Cleat::getlaceType() const{
    return _laceType;
}

string Cleat::to_string() {
    string cleat_color;
    string cleat_design;
    string cleat_lace;

    switch(_color){
        case 0:
            cleat_color = "Red";
            break:
        case 1:
            cleat_color = "Blue";
            break:
        case 2:
            cleat_color = "Black";
            break:
        case 3:
            cleat_color = "White";
            break:
        case 4:
            cleat_color = "Green";
            break:
        case 5:
            cleat_color = "Yellow";
            break:
    }
}