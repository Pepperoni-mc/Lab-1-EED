//
// Created by Happy on 9/17/2021.
//

#ifndef MAIN_CPP_ESTUDIANTE_H
#define MAIN_CPP_ESTUDIANTE_H
#include <iostream>
#include <string>
using namespace std;

class Estudiante {
    public:
        string nombre;
        string apellido;
        int edad;
        int notaPromedio;

        void calificacion() const;
        bool mayoria() const;
    Estudiante();
    Estudiante(string nombre, string apellido, int edad, int notaPromedio);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getApellido() const;

    void setApellido(const string &apellido);

    int getEdad() const;

    void setEdad(int edad);

    int getNotaPromedio() const;

    void setNotaPromedio(int notaPromedio);

    void calificacion();

    bool mayoria(int edad);
};

#endif //MAIN_CPP_ESTUDIANTE_H
