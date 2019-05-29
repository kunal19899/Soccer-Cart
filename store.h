#ifndef _STORE_H
#define _STORE_H

#include "product.h"
#include <string>
#include <vector>

class Store
{
private:
    std::string _name;
    std::vector<Product*> _products;
public:
    Store();
    Store(std::string store_name);

    std::string name();

    void add_product(Product* product);

    int number_of_products();

    std::string product_to_string(int product);

    int counter;
};

#endif