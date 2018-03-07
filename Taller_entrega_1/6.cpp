/*Realice un programa en C++ que pida al usuario 15 números e imprima cuántos de estos son positivos, cuántos negativos y cuántos neutros (0).*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
    int pos = 0, neg = 0, neut = 0, temp = 0;
    for(int ii = 1; ii <= 15; ii++){
        cout << "Ingrese No." << ii << ": \t";
        cin >> temp;
        if(temp > 0){
            pos++;
        }
        else if(temp < 0){
            neg++;
        }
        else if(temp == 0){
            neut++;
        }
    }
    cout << "-----------------" << endl;
    cout << "POSITIVOS = " << pos << endl;
    cout << "NEGATIVOS = " << neg << endl;
    cout << "NEUTROS = " << neut << endl;
    cout << "-----------------" << endl;

    system("PAUSE");
    return 0;
}
