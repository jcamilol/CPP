/*Realice un programa en C++
que pida una letra e imprima si la letra es una vocal o no.*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    char ch = 'g';
    cout << "Ingrese una letra" << endl;
    cin >> ch;

    if(ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 || ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117){
        cout << ch <<" SI es una vocal" << endl;
    }
    else{
        cout << ch << " NO es una vocal" << endl;
    }

    system ("PAUSE");
    return 0;
}
