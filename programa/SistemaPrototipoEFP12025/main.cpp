#include <iostream>
#include "Login.h"
#include "usuario.h"
#include "bitacora.h"

using namespace std;


string usuarioActual; // Para guardar el nombre del usuario bitacora
void mostrarMenuPrincipal();
void MenuInformes();
void MenuCatalogos();
void MenuSeguridad();

int main() {
    int opcion;
    bool accesoPermitido = false;

    do {

        system ("cls");
        cout << "\n--- Bienvenido al Sistema ---\n";
        cout << "1. Iniciar Sesion\n";
        cout << "2. Registrarse\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Para evitar errores con getline

        switch (opcion) {
            case 1:
                registrarEvento(usuarioActual, "SE INICIO SESION 5001");
                accesoPermitido = iniciarSesion(usuarioActual);
                break;
            case 2:
                registrarEvento(usuarioActual, "SE REGISTRO UN NUEVO USUARIO 5001");
                registrarUsuario();
                break;
            case 3:
                cout << "\n\nSaliendo del sistema...\n";
                return 0;
            default:
                cout << "Opción invalida.\n";
        }
    } while (!accesoPermitido);

    mostrarMenuPrincipal();
     registrarEvento(usuarioActual, "Cerró sesión desde menú principal");
    return 0;
}




void mostrarMenuPrincipal() {
    int opcion;
    do {
        system ("cls");
        cout << "\n\t\t\t|------------------------ \n" ;
        cout << "\t\t\t|     MENU PRINCIPAL     | \n";
        cout << "\t\t\t|------------------------- \n" ;
        cout << "\t\t\t|1. Catalogos\n";
        cout << "\t\t\t|2. informes\n";
        cout << "\t\t\t|3. seguridad\n";
        cout << "\t\t\t|4. Salir del sistema\n";
        cout << "\t\t\t|Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                MenuCatalogo();
                break;
            case 2:
                MenuInformes();
                break;
            case 3:
                break;
            case 4:
                registrarEvento(usuarioActual, "Salio del menu general 5002 ");
                cout << "Cerrando sesion...\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 4);
}
void MenuCatalogos() {
    int opcion;
    do {
        system ("cls");
        cout << "n\t\t\t|------------------------- \n" ;
        cout << "\t\t\t|      MENU CATALOGOS    | \n";
        cout << "\t\t\t|------------------------- \n" ;
        cout << "\t\t\t|1. CLIENTES \n";
        cout << "\t\t\t|2. VENDEDORES\n";
        cout << "\t\t\t|3. PRODUCTOS\n";
        cout << "\t\t\t|4. VENTAS\n";
        cout << "\t\t\t|5. FACTURACION\n";
        cout << "\t\t\t|6. REGRESAR AL MENU PRINCIPAL\n";
        cout << "\t\t\t| Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
            case 4:
                break;
            case 5:
                break;
            case 6:
                registrarEvento(usuarioActual, "Salio del menu de catalogos 5002 ");
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 6);
}

void MenuInformes() {
    int opcion;
    do {
        system ("cls");
        cout << "n\t\t\t|------------------------- \n" ;
        cout << "\t\t\t|      MENU INFORMES      | \n";
        cout << "\t\t\t|--------------------------\n" ;
        cout << "\t\t\t|1. REGISTRO CLIENTES \n";
        cout << "\t\t\t|2. REGISTRO VENDEDORES\n";
        cout << "\t\t\t|3. REGISTRO PRODUCTOS\n";
        cout << "\t\t\t|4. REGRESAR AL MENU PRINCIPAL\n";
        cout << "\t\t\t| Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                break;
           case 2:
    break;
            case 3:
                break;
            case 4:
                registrarEvento(usuarioActual, "Salio del menu de procesos 5002 ");
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 4);
}

void MenuSeguridad() {
    int opcion;
    do {
        system ("cls");
        cout << "n\t\t\t|-------------------------- \n" ;
        cout << "\t\t\t|      MENU SEGURIDAD      | \n";
        cout << "\t\t\t|--------------------------\n" ;
        cout << "\t\t\t|1. REGISTRO CLIENTES \n";
        cout << "\t\t\t|2. REGISTRO VENDEDORES\n";
        cout << "\t\t\t|3. REGISTRO PRODUCTOS\n";
        cout << "\t\t\t|4. REGRESAR AL MENU PRINCIPAL\n";
        cout << "\t\t\t| Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                break;
           case 2:
    break;
            case 3:
                break;
            case 4:
                registrarEvento(usuarioActual, "Salio del menu de procesos 5002 ");
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 4);
}


