#include "catalogos.h"

using namespace std;

int CRUDHotel::generarIDTipoHabitacion() {
    return tiposHabitacion.empty() ? 1 : tiposHabitacion.back().id + 1;
}

int CRUDHotel::generarIDTipoCama() {
    return tiposCama.empty() ? 1 : tiposCama.back().id + 1;
}

void CRUDHotel::menuHabitaciones() {
    int opcion;
    do {
        system ("cls");
        cout << "\n--- MENU HABITACIONES ---\n";
        cout << "1. Agregar Habitacion\n";
        cout << "2. Listar Habitaciones\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarHabitacion(); break;
            case 2: listarHabitaciones(); break;
            case 0: break;
            default: cout << "Opcion invalida\n";
        }
    } while (opcion != 0);
}

void CRUDHotel::menuTiposHabitacion() {
    int opcion;
    do {
        system ("cls");
        cout << "\n--- MENU TIPOS DE HABITACION ---\n";
        cout << "1. Agregar Tipo\n";
        cout << "2. Listar Tipos\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarTipoHabitacion(); break;
            case 2: listarTiposHabitacion(); break;
            case 0: break;
            default: cout << "Opcion invalida\n";
        }
    } while (opcion != 0);
}

void CRUDHotel::menuTiposCama() {
    int opcion;
    do {
        cout << "\n--- MENU TIPOS DE CAMA ---\n";
        cout << "1. Agregar Tipo\n";
        cout << "2. Listar Tipos\n";
        cout << "0. Volver\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarTipoCama(); break;
            case 2: listarTiposCama(); break;
            case 0: break;
            default: cout << "Opcion invalida\n";
        }
    } while (opcion != 0);
}

void CRUDHotel::agregarTipoHabitacion() {
    TipoHabitacion th;
    th.id = generarIDTipoHabitacion();
    cout << "Nombre del tipo de habitacion: ";
    cin.ignore();
    getline(cin, th.nombre);
    tiposHabitacion.push_back(th);
    cout << "Tipo de habitacion agregado.\n";
}

void CRUDHotel::listarTiposHabitacion() {
    cout << "\n--- Tipos de Habitacion ---\n";
    for (auto& th : tiposHabitacion) {
        cout << "ID: " << th.id << " - " << th.nombre << "\n";
    }
}

void CRUDHotel::agregarTipoCama() {
    TipoCama tc;
    tc.id = generarIDTipoCama();
    cout << "Nombre del tipo de cama: ";
    cin.ignore();
    getline(cin, tc.nombre);
    tiposCama.push_back(tc);
    cout << "Tipo de cama agregado.\n";
}

void CRUDHotel::listarTiposCama() {
    cout << "\n--- Tipos de Cama ---\n";
    for (auto& tc : tiposCama) {
        cout << "ID: " << tc.id << " - " << tc.nombre << "\n";
    }
}

void CRUDHotel::agregarHabitacion() {
    Habitacion h;
    cout << "Numero de habitacion: ";
    cin >> h.numero;

    listarTiposHabitacion();
    cout << "ID del tipo de habitacion: ";
    cin >> h.idTipoHabitacion;

    listarTiposCama();
    cout << "ID del tipo de cama: ";
    cin >> h.idTipoCama;

    habitaciones.push_back(h);
    cout << "Habitacion agregada.\n";
}

void CRUDHotel::listarHabitaciones() {
    cout << "\n--- Habitaciones ---\n";
    for (auto& h : habitaciones) {
        cout << "Habitacion " << h.numero
             << " | Tipo Hab.: " << h.idTipoHabitacion
             << " | Tipo Cama: " << h.idTipoCama << "\n";
    }
}
