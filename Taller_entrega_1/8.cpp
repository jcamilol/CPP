/*Realice un programa en C++ que calcule el menor entre 10 números ingresados por el usuario. Para este ejercicio no interesa que haya números repetidos. Por ejemplo, si el usuario ingresa 1,9,4,27,6,27,8,9,1,10 el programa debería mostrar que el número menor es el 1. Nota: ¡La solución NO es usar 10 variables!*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int men = 0, temp = 0;
    cout << "Ingrese el No.1     "; //Se hace el primer número aparte para asegurar que el número menor sea uno ingresado por el usuario (Si se hace en el ciclo, el menor puede ser 0 si se ingresan solo números mayores)
    cin >> men;
    for(int ii = 2; ii <= 10; ii++){
        cout << "Ingrese el No." << ii << "     ";
        cin >> temp;
        if(temp < men){
            men = temp;
        }
    }
    cout << "--------------------------" << endl;
    cout << "El número menor es " << men << endl;
    cout << "--------------------------" << endl;

    system("PAUSE");
    return 0;
}
