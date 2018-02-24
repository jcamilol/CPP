/* Realice un programa en C++ que imprima en la consola la frase “Debo aprender a
programar” 500 veces. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int ii = 1;

    while (ii <= 500){
        cout << ii <<". Debo aprender a programar" << endl;
        ii++;
    }

    system ("PAUSE");
    return 0;
}
