/*Realice un programa en C++ que pida al usuario un número y muestre lo siguiente:
• “fizz” Si el número es múltiplo de 3.
• “buzz” Si el número es múltiplo de 5.
• “fibuzz” Si el número es múltiplo de 3 y 5 a la vez (Para este caso solo debe
mostrar “fibuzz”)*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num = 0;
    cout << "Ingrese un numero" << endl;
    cin >> num;

    if( (num % 3 == 0) && (num % 5 != 0) ){ //El caso en que SOLAMENTE es múltiplo de 3
        cout << "fizz" << endl;
    }

    else if( (num % 3 != 0) && (num % 5 == 0)){ //El caso en que SOLAMENTE es múltiplo de 5
        cout << "buzz" << endl;
    }

    else if ( (num % 3 == 0) && (num % 5 == 0) ){ //El caso en que es múltiplo de 3 Y de 5
        cout << "fibuzz" << endl;
    }

    system ("PAUSE");
    return 0;
}
