/*Realice un programa en C++ que pida un número e imprima si este es múltiplo de 7.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int n = 0;
    cout << "Ingrese un número entero" << endl;
    cin >> n;
    if(n%7 == 0)
        cout << n <<" SÍ es múltiplo de 7" << endl;
    else
        cout << n <<" NO es múltiplo de 7" << endl;

    system("PAUSE");
    return 0;
}
