// cliente.cpp
#include <string>
#include "../include/cliente.hpp"

using namespace std;

/*    otra forma de escribir el constructor
Cliente::Cliente(string _code, string _name, string _surname, string _address)
    : Persona(_name, _surname)
    , code(_code)
    , address(_address)
{}
*/

Cliente::Cliente(string _code, string _name, string _surname, string _address)
: Persona(_name, _surname)  // La clase base DEBE inicializarse en la lista de inicialización
{
    this->code = _code;
    this->address = _address;
}


string Cliente::getCode() {
    return code;
}

string Cliente::getName() {
    return name;
}

string Cliente::getSurname() {
    return surname;
}

string Cliente::getAddress() {
    return address;
}