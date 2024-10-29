// empleado.cpp
#include <string>
#include "../include/empleado.hpp"

using namespace std;

Empleado::Empleado(string _code, string _name, string _surname, string _telephone)
    : Persona(_name, _surname)
{   
    this->code = _code;
    this->telephone = _telephone;
}

string Empleado::getCode() {
    return code;
}

string Empleado::getName() {
    return name;
}

string Empleado::getSurname() {
    return surname;
}

string Empleado::getTelephone() {
    return telephone;
}