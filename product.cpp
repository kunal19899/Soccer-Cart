#include <iostream>
#include "product.h"

Product::Product(string name, double price, double cost) :
    _name{name}, _price{price}, _cost{cost} { }

string Product::name() {
    return _name;
}

double Product::price() const {return _price;}
double Product::cost() const {return _cost;}

string Product::to_string(){
    cout << Product::name() << " | " << Product::price() << " | " << Product::cost();
}