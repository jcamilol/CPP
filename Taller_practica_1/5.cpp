/*Realizar un programa en C++ que calcule la diferencia de edad entre dos personas. El programa debe solicitar al usuario estas dos edades.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int edad1 = 0, edad2 = 0; //Definimos e inicializamos las dos edades
    int temp = 0; //Una veriable temporal que usaremos más adelante
    int diff = 0; //En esta variable guardaremos la diferencia de edades

    cout << "Ingrese la edad de la persona 1" << endl;
    cin >> edad1; //Se lee la primera edad
    cout << "Ingrese la edad de la persona 2" << endl;
    cin >> edad2; //Se lee la segunda edad1

    //Procedemos a determinar cuál es el mayor y cual el menor
    //Asignamos la edad mayor a edad 1 y la edad menor a edad 2 con esto:
    if(edad2 > edad1){
        temp = edad2;
        edad2 = edad1;
        edad1 = temp;
    }

    diff = edad1 - edad2; // La diferencia es la resta de la edad mayor con la edad menor

    cout << "-----------------------------------------------------" << endl;
    cout << "La diferencia entre las dos personas es " << diff << endl;
    cout << "-----------------------------------------------------" << endl;

    system("PAUSE");
    return 0;
}
