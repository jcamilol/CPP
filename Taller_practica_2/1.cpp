/*Realice un programa en C++ que pida un número real e imprima si el número es
positivo, negativo o cero.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    double num = 0;
    cout << "Ingrese un numero real" << endl;
    cin >> num ;

    if(num == 0){
        cout << "El numero es cero" << endl;
    }

    else if (num < 0){
        cout << "El numero es negativo" << endl;
    }

    else if (num > 0){
        cout << "El numero es positivo" << endl;
    }

    system ("PAUSE");
    return 0;
}
