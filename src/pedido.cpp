#include <iostream>
#include "../include/pedido.hpp"

using namespace std;

Pedido::Pedido(string _code, Cliente* _cliente, Empleado* _empleado)
    {
        this->code = _code;           
        this->cliente = _cliente;
        this->empleado = _empleado;
 }

string Pedido::getCode()
{
    return this->code;
}

void Pedido::addEquipo(Equipo* _equipo)
{
    this->listaEquipo.push_front(_equipo); // Agregar equipo al inicio de la lista
}

void Pedido::showPedido()
{
    cout << "Pedido Nro: " << getCode() << endl;
    if (cliente != nullptr) {
        cout << "Cliente: " << cliente->getName() << " " << cliente->getSurname() << endl;
        cout << "Direccion: " << cliente->getAddress() << endl;
    }
    if (empleado != nullptr) {
        cout << "Empleado: " << empleado->getName() << " " << empleado->getSurname() << endl;
    }

    cout << "Equipos: " << endl;

    for (Equipo* equipo : listaEquipo) {
        if (equipo != nullptr) {
            cout << "  - " << equipo->getName() << " (" << equipo->getCode() << "): $" << equipo->getPrice() << endl;
        }
    }

    cout << "-------------------------------------" << endl;
    cout << endl;
}




