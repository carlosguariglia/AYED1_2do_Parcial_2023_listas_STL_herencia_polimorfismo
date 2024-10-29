// cliente.hpp
#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "persona.hpp"
#include <string>
using namespace std;

class Cliente : public Persona {
private:
    string code;
    string address;

public:
    Cliente(string _code, string _name, string _surname, string _address);

    string getCode();
    string getName() override;
    string getSurname() override;
    string getAddress();
};

#endif // CLIENTE_HPP