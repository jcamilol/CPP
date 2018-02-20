//Write a C++ program to take two integer inputs from user and print sum and product of them.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int x = 1, y = 1, sum = 0, product = 0;
    sum = x + y;
    product = x * y;
    cout << x << " + " << y << " = " << sum <<endl;
    cout << x << " * " << y << " = " << product <<endl;

    system("PAUSE");
    return 0;
}
