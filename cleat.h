#ifndef _CLEAT_H
#define _CLEAT_H

#include "product.h"
#include <string>
#include <iostream>


enum Color {red, blue, black, white, green, yellow};
enum Design {normal, special, custom};
enum LaceType {cloth, plastic, nylon};

class Cleat : public Product{
protected:
    Color _color;
    Design _design;
    LaceType _laceType;
public:
    Cleat(string name, double price, double cost, Color color, Design design, LaceType laceType);
    Color getColor() const;
    Design getDesign() const;
    LaceType getlaceType() const;
    virtual string to_string() override;
};

#endif