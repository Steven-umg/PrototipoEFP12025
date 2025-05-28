#ifndef CATALOGOS_H
#define CATALOGOS_H

#include <iostream>
#include <vector>
#include <string>

struct TipoHabitacion {
    int id;
    std::string nombre;
};

struct TipoCama {
    int id;
    std::string nombre;
};

struct Habitacion {
    int numero;
    int idTipoHabitacion;
    int idTipoCama;
};

class CRUDHotel {
private:
    std::vector<TipoHabitacion> tiposHabitacion;
    std::vector<TipoCama> tiposCama;
    std::vector<Habitacion> habitaciones;

    int generarIDTipoHabitacion();
    int generarIDTipoCama();

public:
    void menuHabitaciones();
    void menuTiposHabitacion();
    void menuTiposCama();

    // Métodos de gestión
    void agregarTipoHabitacion();
    void listarTiposHabitacion();
    void agregarTipoCama();
    void listarTiposCama();
    void agregarHabitacion();
    void listarHabitaciones();
};

#endif
