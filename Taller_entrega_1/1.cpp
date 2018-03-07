/*Una tienda ofrece un descuento del 15% sobre el total de la compra, realice un programa en C++ que reciba el total de la compra y muestre al usuario el valor que debe pagar luego de aplicar el descuento.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    double compra = 0, dcto = 0;
    cout << "Ingrese el total de la compra" << endl;
    cin >> compra;
    dcto = compra*0.15;
    cout << "-------------------------------" << endl;
    cout << "Valor a pagar (15%dcto) = " << (compra - dcto) << endl;
    cout << "-------------------------------" << endl;

    system("PAUSE");
    return 0;
}
