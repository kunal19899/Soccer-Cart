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
            break;
        case 1:
            cleat_color = "Blue";
            break;
        case 2:
            cleat_color = "Black";
            break;
        case 3:
            cleat_color = "White";
            break;
        case 4:
            cleat_color = "Green";
            break;
        case 5:
            cleat_color = "Yellow";
            break;
    }

    switch(_design){
        case 0:
            cleat_design = "Normal";
            break;
        case 1:
            cleat_design = "Special";
            break;
        case 2:
            cleat_design = "Custom";
            break;
    }

    switch(_laceType){
        case 0:
            cleat_lace = "cloth";
            break;
        case 1:
            cleat_lace = "plastic";
            break;
        case 2:
            cleat_lace = "nylon";
            break;
    }

    cout << Product::name() << '|' << _price << '|' << _cost << '|' << _color << '|' << _design << '|' << _laceType << endl;
    return cleat_color;
}