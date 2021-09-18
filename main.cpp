#include <iostream>
#include <cstdlib>
#include "Estudiante.h"

using namespace std;

int main() {
    Estudiante est;

    cout << "Ingrese el nombre del estudiante: ";
    cin >> est.nombre;
    cout << "Ingrese el apellido del estudiante: ";
    cin >> est.apellido;
    cout << "Ingrese la edad del estudiante: ";
    cin >> est.edad;
    cout << "Ingrese la nota promedio del estudiante: ";
    cin >> est.notaPromedio;

    string fullname = est.apellido + ", " +  est.nombre;

    cout << "\n*----------------------------------------*\nPara el estudiante: " << fullname << "\n*----------------------------------------*\n" <<endl;


    if (est.mayoria(est.getEdad())){
        cout << "El estudiante es mayor de edad"<< endl;
    }else{
        cout << "El estudiante es menor de edad"<< endl;
    }

    est.calificacion();

    system("pause");
    return 0;
}
