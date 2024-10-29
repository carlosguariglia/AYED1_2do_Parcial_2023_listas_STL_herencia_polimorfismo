#include <iostream>
#include "./include/equipo.hpp"   
#include "./include/cliente.hpp"
#include "./include/pedido.hpp"
#include "./include/empleado.hpp"

using namespace std;

int main()
{   
    // Hacemos todo harcodeado sin menu  
    
    // Creamos algunos Equipos  Son objetos de la clase Equipo
    Equipo* equipo1 = new Equipo("E001", "Matafuegos 1KG", 4999.99); 
    Equipo* equipo2 = new Equipo("E002", "Guantes Ignifugo", 500.00);
    Equipo* equipo3 = new Equipo("E003", "Casco", 10000);
    
    
    // Creamos algunos clientes  Son objetos de la clase Cliente
    Cliente* cliente1 = new Cliente("C001", "Carlos", "Garcia", "Coronel Díaz y Santa Fe");
    Cliente* cliente2 = new Cliente("C002", "Ricardo", "Starkey", "Abbey Road 2");

    // Creamos algunos empleados  Son objetos de la clase Empleado
    Empleado* empleado1 = new Empleado("E001", "Roberto", "Esponja", "223 155 456357");
    Empleado* empleado2 = new Empleado("E002", "Patricio", "Estrella", "223 154 865475");
    
    
    // Creamos algunos pedidos  Son objetos de la clase Order
    Pedido* pedidoCliente1 = new Pedido("P001", cliente1, empleado1);
    Pedido* pedidoCliente2 = new Pedido("P002", cliente2, empleado2);
   
    // Agregamos artículos a los pedidos  Usamos el metodo addArticle de la clase Order
    pedidoCliente1->addEquipo(equipo1);
    pedidoCliente1->addEquipo(equipo2);
    pedidoCliente2->addEquipo(equipo3);

        
    // Mostramos la lista de pedidos
    cout << endl;
    cout << "************************************************" << endl;
    cout << "LISTA DE PEDIDOS - Segurola y havana S.A. " << endl;
    cout << "************************************************" << endl;
    cout << endl;
    
    pedidoCliente1->showPedido();
    pedidoCliente2->showPedido();


    // Liberamos la memoria
    delete equipo1;
    delete equipo2;
    delete equipo3;
    delete pedidoCliente1;
    delete pedidoCliente2;
    delete cliente1;
    delete cliente2;
    delete empleado1;
    delete empleado2;
    
   
    return 0;
}