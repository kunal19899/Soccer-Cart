#ifndef _BALL_H
#define _BALL_H

#include <iostream>
#include "product.h"
#include <string>

enum Design {normal, special, custom};

class Ball : public Product{
protected:
    Design _design;
    bool _isInflated;
public:
    Ball(string name, double price, double cost, Design designa);
    bool inflate();
    virtual string to_string() override;
};

#endif