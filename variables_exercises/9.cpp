//Write a program to add 3 to the ASCII value of the character 'd' and print the equivalent character.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    char ch = 'd';
    int ch2 = int(ch) + 3;
    cout << "Caracter final = " << char(ch2) << endl;

    system("PAUSE");
    return 0;
}
