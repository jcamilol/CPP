/*Sin usar el operador modulo (%), realizar un programa en C++ que pida dos números (a y b) y muestre si a es múltiplo de b .*/
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void)
{
    int a = 0, b = 0;
    double c = 0;
    cout << "Ingrese dos enteros" << endl;
    cin >> a;
    cin >> b;
    if(b != 0){
        c = (((double)a)/b); //typecasting de la división a double
        //¿Existe c entero tal que a = c*b? => a/b = c; c debe ser entero
        if(c == floor(c)){ //Si es entero, es igual a su parte entera
            cout << a << " SÍ es múltiplo de " << b << endl;
        }
        else{
            cout << a << " NO es múltiplo de " << b << endl;
        }
    }
    else if(b == 0 && a == 0){
        cout << a << " SÍ es múltiplo de " << b << endl;
    }
    else if(b == 0 && a!= 0){
        cout << a << " NO es múltiplo de " << b << endl;
    }

    system("PAUSE");
    return 0;
}
