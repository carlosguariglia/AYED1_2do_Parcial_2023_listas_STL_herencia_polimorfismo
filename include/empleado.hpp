// empleado.hpp
#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "persona.hpp"
#include <string>
using namespace std;

class Empleado : public Persona {
private:
    string code;
    string telephone;

public:
    Empleado(string _code, string _name, string _surname, string _telephone);

    string getCode();
    string getName() override;
    string getSurname() override;
    string getTelephone();
};

#endif // EMPLEADO_HPP
