#include "ball.h"
#include <string>
#include <iostream>

Ball::Ball(string name, double price, double cost, Design design) :
    Product{name, price, cost}, _design{design}, _isInflated{false} { }

bool Ball::inflate()
{
    _isInflated = true;
    return _isInflated;
}

string Ball::to_string()
{
    string ball_design;
    string isInflated;

    switch(_design){
        case 0:
            ball_design = "Normal";
            break;
        case 1:
            ball_design = "Special";
            break;
        case 2:
            ball_design = "Custom";
            break;
    }

    if (_isInflated)
    {
        isInflated = "Inflated";
    }
    else{
        isInflated = "Not Inflated";
    }

    cout << Product::name() << '|' << _price << '|' << _cost << '|' << ball_design << isInflated << endl;
    return ball_design;
}