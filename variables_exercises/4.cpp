//Take two integer inputs from user. First calculate the sum of two then product of two. Finally, print the sum and product of both obtained results.

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
