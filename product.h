#ifndef _PRODUCT_H
#define _PRODUCT_H

#include <iostream>
#include <string>

using namespace std;

class Product{
protected:
    string _name;
    double _price;
    double _cost;

public:
    Product(string name, double price, double cost);
    string name();
    double cost() const;
    double price() const;
    virtual string to_string();
};

#endif