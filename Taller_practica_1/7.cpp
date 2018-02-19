/*En la Universidad de ASDFG el curso de Cálculo se evalúa de la
siguiente forma:
• Nota de parciales = 50%
• Nota de Talleres = 30%
• Nota de Quices = 20%
El curso ha finalizado y los estudiantes ya conocen sus 3 notas
finales (nota de parciales, nota de talleres y nota de quices).
A pesar de que el curso es de cálculo, los estudiantes no saben
cómo obtener su nota definitiva (la cual seguramente no será
muy buena).
Realice un programa en C++ que ayude a los estudiantes de
este curso a calcular sus notas definitivas.
El programa debe recibir del usuario la nota de parciales, la
nota de talleres y la nota de quices. Con esta información y de
acuerdo con los porcentajes establecidos, el programa debe
informar la nota definitiva.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    double parciales = 0, talleres = 0, quices = 0; //Inicializamos las tres variables correspondientes a cada una de las notas
    double definitiva = 0;

    cout << "Ingrese su nota de parciales" << endl;
    cin >> parciales;
    cout << "Ingrese su nota de talleres" << endl;
    cin >> talleres;
    cout << "Ingrese su nota de quices" << endl;
    cin >> quices;

    parciales *= 0.5;
    talleres *= 0.3;
    quices *= 0.2;
    definitiva = parciales + talleres + quices;

    cout << "------------------------------" << endl;
    cout << "Su nota definitiva es : " << definitiva << endl;
    cout << "------------------------------" << endl;
}
