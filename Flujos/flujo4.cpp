#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int leer(istream& flujo_entrada){
    int dato;
    flujo_entrada >> dato;
    return dato;
}

ostream& escribir(int dato, ostream& flujo_salida){
    flujo_salida << dato;
    flujo_salida << '\t';
    return flujo_salida;
}

void imprimir_contador(int n){
    cout << "-------------------------------------"<< endl;
    cout << "El programa se abrio por " << n << " vez" << endl;
    cout << "-------------------------------------"  << endl;
}

int main(){
    int contador;
    ifstream archivo("contador.txt");
    contador = leer(archivo);
    archivo.close();
    imprimir_contador(contador);
    contador++;
    ofstream archivo_salida("contador.txt");
    escribir(contador, archivo_salida);
    archivo_salida.close();
    system("PAUSE");
    return 0;
}
