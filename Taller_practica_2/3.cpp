// Realice un programa en C++ que pida un número e imprima si este es par o impar.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num = 0;
    cout << "Ingrese un numero" << endl;
    cin >> num;

    if(num % 2 == 0){
        cout << num << " es un numero PAR" << endl;
    }
    else{
        cout << num << " es un numero IMPAR" << endl;
    }

    system ("PAUSE");
    return 0;
}
