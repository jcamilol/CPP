//Write a program to take input of length and breadth of a rectangle from the user and print its area.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int x = 1, y = 1, sum = 0, product = 0;
    cout << "Ingrese dos números enteros" << endl;
    cin >> x;
    cin >> y,
    sum = x + y;
    product = x * y;
    cout << x << " + " << y << " = " << sum <<endl;
    cout << x << " * " << y << " = " << product <<endl;

    system("PAUSE");
    return 0;
}
