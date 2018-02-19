/*Realizar un programa en C++ que solicite la edad actual del usuario y luego le informe cuantos años tendrá en el año 2050.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int edad_actual = 0, edad_final = 0; //Inicializamos las variables

    cout << "Ingrese su edad actual" << endl;
    cin >> edad_actual;

    edad_final = edad_actual + (2050 - 2018);

    cout << "---------------------------------------" << endl;
    cout << "Su edad en el año 2050 será : " << edad_final << " años " << endl;
    cout << "---------------------------------------" << endl;

    system("PAUSE");
    return 0;
}
