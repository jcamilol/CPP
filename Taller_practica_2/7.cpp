/*Realice un programa en C++ que calcule el mayor entre 15 números ingresados por el
usuario Para este ejercicio no interesa que haya números repetidos.
Por ejemplo, si el usuario ingresa 1,9,4,15,6,27,8,9,10 ,10,12,12,15,27,2 el programa
debería mostrar que el número mayor es el 27.
Nota: ¡La solución NO es usar 15 variables!*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int may  = -32767, numtemp;

    for(int ii = 1; ii<=15; ii++){
        cout << "Ingrese el numero No." << ii << endl;
        cin >> numtemp;

        if( numtemp > may){
            may = numtemp;
        }
    }

    cout << "-----------------------------------" << endl;
    cout << "El mayor de los 15 numeros es: " << may << endl;
    cout << "-----------------------------------" << endl;

    system ("PAUSE");
    return 0;
}
