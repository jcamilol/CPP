/*Un obrero necesita calcular su salario semanal el cual se obtiene de la siguiente manera:
• Si trabaja 40 horas o menos se le paga $16 por hora
• Si trabaja más de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.
Realice un programa en C++ que pida el total de horas trabajadas y muestre al usuario su salario correspondiente.*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[])
{
    int horas = 0, salario = 0;
    cout << "Ingrese el total de horas trabajado" << endl;
    cin >> horas;

    if(horas <= 40){
        salario = 16*horas;
    }
    else{
        salario = 16*40; //Las primeras cuarenta horas se le pagan a $16 c/u
        salario += (horas-40)*20; //A lo anterior se suma el pago por horas extra, el cual es de $20 por hora
    }

    cout << "------------------------" << endl;
    cout << "Su salario es = $" << salario << endl;
    cout << "------------------------" << endl;

    system("PAUSE");
    return 0;
}
