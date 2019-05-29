#ifndef _SHINPAD_H
#define _SHINPAD_H


#include "product.h"
#include <iostream>
#include <string>

enum Size {small, medium, large};

class Shinpad: public Product{
protected:
    Size _size;
public:
    Shinpad(string name, double price, double cost, Size size);
    Size size() const;
    virtual std::string to_string() override;
};

#endif