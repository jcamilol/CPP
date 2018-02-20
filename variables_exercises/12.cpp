//Take value of length and breath of a rectangle from user as float. Find its area and print it on screen after type casting it to int.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    float length = 0, breath = 0;
    cout << "Ingrese el largo del rectángulo" << endl;
    cin >> length;
    cout << "Ingrese el ancho del rectángulo" << endl;
    cin >> breath;
    cout << "Area del rectángulo en entero = " << int(length*breath) << endl;

    system("PAUSE");
    return 0;
}
