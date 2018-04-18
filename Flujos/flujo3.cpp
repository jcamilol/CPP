#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int leer(istream& flujo_entrada){
    int dato;
    flujo_entrada >> dato;
    return dato;
}

ostream& escribir(ostream& flujo_salida, int dato){
    flujo_salida << dato;
    flujo_salida << "\t";
    return flujo_salida;
}

void imprimir_contador(int contador){
    cout << "--------------------------------------" << endl;
    cout << "El programa se ha ejecutado " << contador << " veces" << endl;
    cout << "--------------------------------------" << endl;
}

int main(){

    ifstream archivo_entrada("archivo.txt");//Se crea el flujo de entrada como archivo de texto
    int contador = leer(archivo_entrada);
    archivo_entrada.close();
    contador++;
    imprimir_contador(contador);
    ofstream archivo_salida("archivo.txt"); //Se crea el flujo de salida como archivo de texto
    escribir(archivo_salida, contador);
    archivo_salida.close();

    return 0;
}
