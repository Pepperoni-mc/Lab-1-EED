//
// Created by Happy on 9/17/2021.
//

#include "Estudiante.h"
#include <iostream>
#include <string>
#include <utility>
using namespace std;

Estudiante::Estudiante(string nombre, string apellido, int edad, int notaPromedio) : nombre(std::move(nombre)),
                                                                                                   apellido(std::move(apellido)),
                                                                                                   edad(edad),
                                                                                                   notaPromedio(
                                                                                                           notaPromedio) {}

bool Estudiante::mayoria(int edad){
    if (edad >= 18) {
        return true;
    }else{
        return false;
    }
}

void Estudiante::calificacion(){
    string _calificacion;
    if (notaPromedio >= 90){
        _calificacion = "Alto rendimiento";
    }else if (notaPromedio >= 70 && notaPromedio <= 89){
        _calificacion = "Mediano rendimiento";
    }else{
        _calificacion = "Bajo rendimiento";
    }
    cout << "La calificacion del estudiante es: " << _calificacion << endl;
    //No funciona por probelmas de compilador
    /*switch (notaPromedio) {
        case 90 ... 100:
            _calificacion = "Alto rendimiento";
        case 70 ... 89:
            _calificacion = "Mediano rendimiento";
        case 0 ... 69:
            _calificacion = "Bajo rendimiento";
        default:
            cout << "nota invalida" << endl;
    }
     */
}

const string &Estudiante::getNombre() const {
    return nombre;
}

void Estudiante::setNombre(const string &nombre) {
    Estudiante::nombre = nombre;
}

const string &Estudiante::getApellido() const {
    return apellido;
}

void Estudiante::setApellido(const string &apellido) {
    Estudiante::apellido = apellido;
}

int Estudiante::getEdad() const {
    return edad;
}

void Estudiante::setEdad(int edad) {
    Estudiante::edad = edad;
}

int Estudiante::getNotaPromedio() const {
    return notaPromedio;
}

void Estudiante::setNotaPromedio(int notaPromedio) {
    Estudiante::notaPromedio = notaPromedio;
}

bool Estudiante::mayoria() const {
    return false;
}

void Estudiante::calificacion() const {

}

Estudiante::Estudiante() {

}






