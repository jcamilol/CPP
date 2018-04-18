/*1.  Modele mediante una funcion matematica y disene una funcion en C++ que permita leer un dato de tipo real desde un flujo generico.
2.  Modele mediante una funcion matematica y disene una funcion en C++ que permita escribir un dato de tipo real en un flujo generico.
3.  Escriba un programa en C++ que lea un dato de tipo real (p. ej. 3.14159265) desde el flujo de datos suministrado por el teclado usando la funcion disenada anteriormente en el numeral 1 y que escriba el opuesto aditivo del numero en la consola usando la funcion disenada anteriormente en el numeral 2 (p. ej. -3.14159265).*/

#include <iostream>
#include <cstdlib>

using namespace std;

double leer_real(istream& flujoE){
    double real;
    flujoE >> real;
    return real;
}

ostream& escribir_real(ostream& flujoS, double real2){
    flujoS << real2;
    flujoS << "\n";
    return flujoS;
}

int main(){

    double opuesto = -1 * leer_real(cin);
    escribir_real(cout, opuesto);

    return 0;
}
