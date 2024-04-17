#include "informe.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

informe::informe(string id2, string nombre2, string precio2, string cantidad2) {
    // Constructor
}

void informe::desplegar() {

    int total = 0;
    system("cls");


    // Imprimir encabezado
    cout <<setw(15)<<"\n-------------------------Tabla de Registros-------------------------" << endl;
    fstream fileDesplegar;
    fileDesplegar.open("catalogos.txt", ios::in);

    // Condición si el archivo no se puede abrir
    if (!fileDesplegar) {
        cout << "\n\t\t\tNo hay información..." << endl;
        fileDesplegar.close();
    } else {
        // Leer registros del archivo y mostrarlos
        while (fileDesplegar >> id2 >> nombre2 >> precio2 >> cantidad2) {
            total++;
            cout <<setw(15)<< "ID: "<<id2<< endl;
            cout << setw(15)<<"NOMBRE :"<< nombre2 << endl;
        }

        if (total == 0) {
            cout << "\n\t\t\tNo hay informacion..." << endl;
        }
    }

    fileDesplegar.close();
    system("pause");
}

