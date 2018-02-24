/*Realice un programa en C++ que pida números de forma sucesiva. El programa debe
parar cundo se ingrese un número comprendido entre 1 y 5 (incluyéndolos).*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num = 0;
    bool boolean = false;

    while (boolean == false){

        cout << "Ingrese un numero" << endl;
        cin >> num;

        if( (num == 1) || (num > 1 && num < 5) || (num == 5) ){
            boolean = true;
        }
    }

    cout << "Gracias :)" << endl;

    system ("PAUSE");
    return 0;
}
