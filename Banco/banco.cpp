#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void impr_menu(){ //Se imprime el menú del banco
    cout << "|-----------------------------------------|" << endl;
    cout << "| Bienvenido a su banco                   |" << endl;
    cout << "|*****************************************|" << endl;
    cout << "| Ingrese una de las siguientes opciones: |" << endl;
    cout << "| S - Consultar saldo                     |" << endl;
    cout << "| D - Depositar                           |" << endl;
    cout << "| R - Retirar                             |" << endl;
    cout << "| Q - Salir                               |" << endl;
    cout << "|-----------------------------------------|" << endl;
}

double consultar_saldo(istream& in_file){ //El archivo desde el que lee es "saldo.txt = in_file"
    double saldo;
    in_file >> saldo;
    return saldo;
}

ostream& mover_dinero(ostream& out_file, double nuevo_saldo){ //El archivo al que escribe es "saldo.txt = OUt_file"
    out_file << nuevo_saldo;
    return out_file;
}

bool get_function(char opcion_elegida){

    bool salir = false;
    bool cambio = false;
    double saldo = 0;

    ifstream in_file("saldo.txt"); //Se lee el saldo original
    saldo = consultar_saldo(in_file);
    in_file.close();

    double dinero_a_mover = 0;

    switch(opcion_elegida){
    case 'S':
        cout << "Ha escogido la opción CONSULTAR SALDO" << endl;
        cout << "Su saldo es ";
        cambio = true;
        break;
    case 'D':
        cout << "Ha escogido la opción DEPOSITAR" << endl;
        cout << "¿Cuánto dinero desea depositar?" << endl;
        cin >> dinero_a_mover;
        cout << "Se han depositado " << dinero_a_mover << " pesos a su cuenta. Su nuevo saldo es ";
        cambio = true;
        break;
    case 'R':
        cout << "Ha escogido la opción RETIRAR DINERO" << endl;
        cout << "¿Cuánto dinero desea retirar?" << endl;
        cin >> dinero_a_mover;
        if(dinero_a_mover <= saldo){
            cout << "Se han retirado " << dinero_a_mover << " pesos a su cuenta. Su nuevo saldo es ";
            dinero_a_mover = -dinero_a_mover; //Se cambia el signo para restar
            cambio = true;
        }
        else{
            cout << "Usted no posee los fondos suficientes" << endl;
            cambio = false;
        }
        break;
    case 'Q':
        cout << "Ha escogido la opción SALIR" << endl;
        salir = true;
        cambio = false;
        break;
    default:
        cout << "Opción incorrecta" << endl;
        cambio = false;
    }

    double nuevo_saldo = saldo + dinero_a_mover;

    if(cambio == true){

        ofstream out_file("saldo.txt"); //Se cambia el saldo dependiendo cuanto dinero se mueve
        mover_dinero(out_file, nuevo_saldo);
        out_file.close();

        ifstream inin_file("saldo.txt"); //Se lee el nuevo saldo
        cout  << consultar_saldo(inin_file) << " pesos." << endl;
        inin_file.close();

    }

    return salir;
}

int main(){

    bool salir = false;
    do{
        impr_menu();
        char opcion_elegida = ' ';
        cin >> opcion_elegida;
        salir = get_function(opcion_elegida);
    }
    while(salir == false);

    return 0;
}
