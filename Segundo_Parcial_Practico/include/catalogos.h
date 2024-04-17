#ifndef CATALOGO_H
#define CATALOGO_H
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class catalogo
{
    public:
        catalogo(string id, string nombre, string precio, string cantidad);
        string setId(string id);
        string getId();

        string setNombre(string nombre);
        string getNombre();

        string setPrecio(string precio);
        string getPrecio();

        string setCantidad(string cantidad);
        string getCantidad();

        void menuPrincipal();
        void submenu();
        void insertar();
        void consultar();
        void desplegar();
		void modificar();
		void buscar();
		void borrar();

    private:
    string id,nombre,precio,cantidad;
};
#endif // catalogo.h
