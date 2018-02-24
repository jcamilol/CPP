/*En una universidad, el promedio para pasar el semestre es de 6.0 sobre 10.0 . Realice
un programa en C++ que haga lo siguiente:
• Pregunte al usuario el número de asignaturas que curso en el semestre (n).
• Pregunte al usuario cada una de las n notas.
• Calcule el promedio e informe al usuario si paso o no el semestre.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n = 0, ii = 1;
    double sum = 0, notatemp = 0;
    cout << "Ingrese el numero de asignaturas que vio este semestre" << endl;
    cin >> n;

    if(n <= 0){
        cout << "Intente de nuevo con numero positivo" << endl;
    }

    while (ii <= n){
        cout << "Ingrese su nota de la materia " << ii << endl;
        cin >> notatemp;
        sum += notatemp;
        ii++;
    }

    double prom = sum / n;

    cout << "------------------------------" << endl;

    cout << "Su promedio es " << prom << endl;

    if(prom >= 6){
        cout << "Usted SI aprobo el semestre" << endl;
    }

    else{
        cout << "Usted NO aprobo el semestre" << endl;
    }

    cout << "------------------------------" << endl;

    system ("PAUSE");
    return 0;
}
