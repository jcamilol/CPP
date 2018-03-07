/*Realice un programa en C++ que imprima la suma de los números positivos impares menores o iguales a un número n dado por el usuario.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int n = 0, sum = 0;
    cout << "Ingrese un entero positivo" << endl;
    cin >> n;
    for(int ii = 1; ii <= n; ii++){
        if(ii%2 != 0){ 
            sum += ii; //Si el número es impar se añade en la suma
        }
    }
    cout << "----------" << endl;
    cout << "SUMA = " << sum << endl;
    cout << "----------" << endl;

    system("PAUSE");
    return 0;
}
