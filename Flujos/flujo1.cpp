#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int leer(istream& flujoE){ //función de lectura, que retorna un tipo de dato especificado y que tiene como argumento el lugar donde lee
    int num;
    flujoE >> num;
    return num;
}

ostream& escribir(ostream& flujoS, int num){ //Función de escritura que tiene como argumento el lugar donde escribe y el tipo de dato que escribe
    flujoS << num;
    flujoS << "\n";
    return flujoS;
}

int main(void){

    cout << leer(cin) <<endl;
    escribir(cout,13);
    return 0;
}
