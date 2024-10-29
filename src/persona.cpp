// persona.cpp
#include <string>
#include "persona.hpp"

using namespace std;

/*          Otra forma de hacer el constructor
Persona::Persona(const string& _name, const string& _surname)
    : name(_name)
    , surname(_surname)
{}
*/

Persona::Persona(string _name, string _surname)     // constructor de la clase persona (es una clase abstracta no se puede instanciar)
{                                                   // el constructor sera usado por la clase hija al usar los atributos del padre
    this->name = _name;            // al usar el nombre de parametro distinto al de la clase no es necesario el this->
    this->surname = _surname;
}