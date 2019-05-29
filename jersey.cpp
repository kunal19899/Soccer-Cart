#include "jersey.h"
#include <string>
#include <iostream>

Jersey::Jersey(string name, double price, double cost, Color color, Size size, Material material, Design design) :
    Product{name, price, cost}, _color{color}, _size{size}, _material{material}, _design{design} { }

string Jersey::to_string() {
    string jersey_color;
    string jersey_size;
    string jersey_material;
    string jersey_design;

    switch(_color){
        case 0:
            jersey_color = "Red";
            break;
        case 1:
            jersey_color = "Blue";
            break;
        case 2:
            jersey_color = "Black";
            break;
        case 3:
            jersey_color = "White";
            break;
        case 4:
            jersey_color = "Green";
            break;
        case 5:
            jersey_color = "Yellow";
            break;
    }

    switch(_design){
        case 0:
            jersey_design = "Normal";
            break;
        case 1:
            jersey_design = "Special";
            break;
        case 2:
            jersey_design = "Custom";
            break;
    }

    switch(_size){
        case 0:
            jersey_size = "Small";
            break;
        case 1:
            jersey_size = "Medium";
            break;
        case 2:
            jersey_size = "Large";
            break;
    }

    switch(_material){
        case 0:
            jersey_material = "Cotton";
            break;
        case 1:
            jersey_material = "Dry-Fit";
            break;
        case 2:
            jersey_material = "Net";
            break;
    }

    cout << Product::name() << '|' << _price << '|' << _cost << '|' << _color << '|' << _size << '|' << _design << '|' << _material << endl;
    return jersey_color;
}