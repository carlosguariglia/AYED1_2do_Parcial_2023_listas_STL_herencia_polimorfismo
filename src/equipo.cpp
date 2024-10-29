#include "../include/equipo.hpp"    // los 2 puntos al inicio significan que el archivo esta en otro directorio  (se podria pensar que uso un punto porque necesito salir del directorio que esto 1 nivel para atras, src en este caso, y luego ir a include (./include/article.hpp))
#include <string>
#include <iostream>

using namespace std;


Equipo::Equipo(string _code, string _name, float _price) 
{
    this->code = _code;
    this->name = _name;
    this->price = _price;    
};

string Equipo::getName()
    {
        return this->name;
    }

string Equipo::getCode()
    {
        return this->code;
    }

float Equipo::getPrice()
    {
        return this->price;
    }