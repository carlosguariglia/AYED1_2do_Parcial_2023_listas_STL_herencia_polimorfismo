#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>
#include <list>

#include "equipo.hpp"
#include "cliente.hpp"
#include "empleado.hpp"

using namespace std;

class Pedido
{
    private:
        string code;
        Cliente* cliente;         
        Empleado* empleado;
        list<Equipo*> listaEquipo;
        int numEquipos;   

    public:
        Pedido(string _code, Cliente* _cliente, Empleado* _empleado);
        string getCode();
        void addEquipo(Equipo* _equipo);
        void showPedido();
};

#endif