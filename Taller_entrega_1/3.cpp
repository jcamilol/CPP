/*Realice un programa en C++ que muestre los números del 1 al 100 teniendo en cuenta lo
siguiente:
• Debe imprimir “fizz” en lugar del número si este es múltiplo de 3.
• Debe imprimir “buzz” en lugar del número si este es múltiplo de 5.
• Debe imprimir “fibuzz” en lugar del número si este es múltiplo de 3 y 5 a la vez (Para
este caso solo debe mostrar “fibuzz”)*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    for(int ii=1; ii<=100; ii++){
        if(ii%3 == 0 && ii%5 != 0)
            cout << "fizz" << endl;
        else if(ii%3 != 0 && ii%5 == 0)
            cout << "buzz" << endl;
        else if(ii%3 == 0 && ii%5 == 0)
            cout << "fibuzz" << endl;
        else
            cout << ii << endl;
    }

    system("PAUSE");
    return 0;
}
