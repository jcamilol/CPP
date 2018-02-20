// Take a char input from user and print it's ASCII value.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    char ch = 'a';
    cout << "Ingrese un caracter" << endl;
    cin >> ch;
    cout << "Valor ASCII de " << ch << " = " << int(ch) << endl;

    system("PAUSE");
    return 0;
}
