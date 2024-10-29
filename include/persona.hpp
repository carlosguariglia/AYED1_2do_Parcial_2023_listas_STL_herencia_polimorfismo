// persona.hpp
#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>
using namespace std;

class Persona {
protected:
    string name;
    string surname;

public:
    Persona(string _name, string _surname);
    virtual ~Persona() = default;

    virtual string getName() = 0;       // virtual para que las clases hijas puedan sobreescribirlo
    virtual string getSurname() = 0;    // =0 hace que persona sea una clase abstracta
};

#endif // PERSONA_HPP