#include <iostream>
#include "usuario.h"
#include "catalogos.h"
#include "informe.h"

using namespace std;

int main()
{
    //variables de user y contraseñan
    string user,contrasena;
    //llmamos al objeto e ingresamos los parametros
    usuario ingreso(user,contrasena);

     string id, nombre, precio, cantidad;
        catalogo menup (id, nombre, precio, cantidad);

    string id2, nombre2, precio2, cantidad2;
        informe consulta (id2, nombre2, precio2, cantidad2);



    //creamos un bool  que verifique y despliegue el metodo verificarUsuario
    bool UsuarioCorrecto=ingreso.VerificarUsuario();


    //luego de ingresar con usuario y contraseña se nos desplega otro menu
    if(UsuarioCorrecto)
    {
        int opcion;
        char  x;
        do
        {
        	system("cls");

    cout <<"\t\t\t--------------------------------------------"<<endl;
    cout <<"\t\t\t|               BIENVENIDO                  |"<<endl;
    cout <<"\t\t\t|   Autor: Cristian David Sipac Ispache     | "<<endl;
    cout <<"\t\t\t|           Carne: 9959-23-1567             |"<<endl;
    cout <<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Menu de Usuarios"<<endl;
	cout<<"\t\t\t 2. Catalogos"<<endl;
    cout<<"\t\t\t 3. Informes"<<endl;
	cout<<"\t\t\t 4. Salir del Menu"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;
    switch(opcion){
    case 1:
        ingreso.MenuUser();//ingresa al menu de usuarios
        break;
    case 2:
        //ingresa el submenu del catalogos
        menup.submenu();
        break;
    case 3:
        consulta.desplegar();
        break;
    case 4:
        break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
        }while(opcion!= 4);

    }
    return 0;
}
