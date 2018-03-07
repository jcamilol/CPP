/*Sin usar el operador modulo (%), realizar un programa en C++ que pida dos números (a y b) y muestre si a es múltiplo de b .*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int a = 0, b = 0;
    cout << "Ingrese dos enteros" << endl;
    cin >> a;
    cin >> b;

    bool boolean = false;
    if(a == 0){
        boolean = true;
    }
    else if(a > 0){
        for(int ii = -a; ii <= a; ii++){
            if(a == b*ii){
                boolean = true;
            }
        }
    }
    else if(a < 0){
        for(int ii = a; ii <= -a; ii++){
            if(a == b*ii){
                boolean = true;
            }
        }
    }
    if (boolean == true)
        cout << a << " SÍ es múltiplo de "<< b << endl;
    else
        cout << a << " NO es múltiplo de "<< b << endl;

    system("PAUSE");
    return 0;
}
