#include <iostream>
#include "store.h"

Store::Store() : Store{"_store_name"} { }
Store::Store(std::string store_name) : _name{store_name} { }

int Store::number_of_products()
{
    return _products.size(); 
}

std::string Store::name()
{
    return _name;
}

std::string Store::product_to_string(int product)
{
    return _products[product]->to_string();
}

void Store::add_product(Product* product){
    static int count = 0;
    _products.push_back(product);
    count++;
    counter = count;
}