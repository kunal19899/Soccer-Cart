#include "shinpad.h"

Shinpad::Shinpad(string name, double price, double cost, Size size) : Product{name, price, cost}, _size{size} { }

Size Shinpad::getSize() const{
    return _size;
}

string Shinpad::to_string()
{
    string d_size;

    switch(_size){
        case 0:
            d_size = "Small";
            break;
        case 1:
            d_size = "Medium";
            break;
        case 2:
            d_size = "Large";
            break;
    }

    cout << Product::name() << '|' << _price << " | " << _cost << " | " << d_size << endl;
    return d_size;
}