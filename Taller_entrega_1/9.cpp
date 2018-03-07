/*Realice un programa en C++ que pida al usuario el lado de un cuadrado y dibuje dicho cuadrado EXACTAMENTE como se muestra en los ejemplos*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 0;
    cout << "Ingrese el tamaño del cuadrado" << endl;
    cin >> n;
    cout << endl;
    for(int ii=1; ii<=n; ii++){
        for(int jj=1; jj<=n; jj++){ //Se identifican todos los elementos de la fila ii
            if(ii == 1 || ii == n){ //La posición está en la primera o en la última fila
                cout << "x" << " ";
            }
            else if(jj == 1 || jj == n){ //La posición está en la primera o en la última columna
                cout << "x" << " ";
            }
            else{ //La posción no está ni en la primera ni en la última fila, ni en la primera ni en la última columna
                cout << "  ";
            }
        }
        cout << endl; //Cuando se acaba una fila se baja un renglón
    }
    cout << endl;

    system("PAUSE");
    return 0;
}
