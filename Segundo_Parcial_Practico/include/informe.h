#ifndef INFORME_H
#define INFORME_H
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class informe
{
    public:
        informe(string id2, string nombre2, string precio2, string cantidad2);
        string setId(string id2);
        string getId();

        string setNombre(string nombre2);
        string getNombre();

        string setPrecio(string precio2);
        string getPrecio();

        string setCantidad(string cantidad2);
        string getCantidad();
//metodos


        void desplegar();
    protected:

    private:
    string id2,nombre2,precio2,cantidad2;
};
#endif // catalogo.h
