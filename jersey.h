#ifndef _JERSEY_H
#define _JERSEY_H

#include <iostream>
#include "product.h"
#include <string>

enum Color {red, blue, black, white, green, yellow};
enum Design {normal, special, custom};
enum Size {small, medium, large};
enum Material {Cotton, DryFit, Net};

class Jersey : public Product{
protected:
    Color _color;
    Size _size;
    Material _material;
    Design _design;
public:
    Jersey(string name, double price, double cost, Color color, Size size, Material material, Design design);
    Size getSize() const;
    Material getMaterial() const;
    Color getColor() const;
    Design getDesign() const;
    virtual string to_string() override;
};

#endif