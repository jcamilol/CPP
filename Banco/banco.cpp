#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

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
    cout << "|                                         |" << endl;
    cout << "| C - Cambiar clave                       |" << endl;
    cout << "|-----------------------------------------|" << endl;
}

double consultar_saldo(istream& in_file){ //El archivo desde el que lee es "saldo.txt = in_file"
    double saldo;
    in_file >> saldo;
    return saldo;
}

ostream& mover_dinero(ostream& out_file, double nuevo_saldo){ //El archivo al que escribe es "saldo.txt = out_file"
    out_file << fixed << setprecision(4) << nuevo_saldo;
    return out_file;
}

bool pedir_clave(int clave_correcta){
    cout << "------------------------------------------------------------------------------ " << endl;
    cout << "| Bienvenido a su banco. Para ingresar digite su clave (Entero de 4 digitos) |" << endl;
    cout << "------------------------------------------------------------------------------" << endl;
    int clave_ingresada = 0;
    cin >> clave_ingresada;
    if(clave_ingresada == clave_correcta){
        return true;
    }
    return false;
}

int get_clave(istream& clave_in_file){
    int clave_correcta;
    clave_in_file >> clave_correcta;
    return clave_correcta;
}

void bloquear_sistema(){
cout << " __________________________________________________________\n";
cout << "/  ____  _     ___   ___  _   _ _____    _    ____   ___     \n";
cout << "| | __ )| |   / _   / _  | | | | ____|  / |  |  _   / _    | \n";
cout << "| |  _  | |  | | | | | | | | | |  _|   / _ | | | | | | | | | \n";
cout << "| | |_) | |__| |_| | |_| | |_| | |___ / ___ || |_| | |_| | | \n";
cout << "| |____/|_____ ___/  __ _ |___/|_____/_/    _|____/  ___/  | \n";
cout << " ---------------------------------------------------------- \n";
cout << "   ^__^\n";
cout << "   (**) _______ \n";
cout << "   (__)        ) /  \n";
cout << "    U  ||----w | \n";
cout << "       ||     || \n";

}

ostream& cambiar_clave(ostream& clave_out_file, int nueva_clave){
    clave_out_file << nueva_clave;
    return clave_out_file;
}

bool get_function(char opcion_elegida){

    bool salir = false;
    bool cambio = false;
    double saldo = 0;
    double dinero_a_mover = 0;

    ifstream in_file("saldo.txt"); //Se lee el saldo original
    saldo = consultar_saldo(in_file);
    in_file.close();

    switch(opcion_elegida){

        case 's':
        case 'S':{
            cout << "Ha escogido la opcion CONSULTAR SALDO" << endl;
            cout << "Su saldo es ";
            cambio = true;

            break;
        }

        case 'd':
        case 'D':{
            cout << "Ha escogido la opcion DEPOSITAR" << endl;
            cout << "Cuanto dinero desea depositar?" << endl;
            cin >> dinero_a_mover;
            cout << "Se han depositado " << dinero_a_mover << " pesos a su cuenta. Su nuevo saldo es ";
            cambio = true;

            break;
        }

        case 'r':
        case 'R':{
            cout << "Ha escogido la opcion RETIRAR" << endl;
            cout << "Cuanto dinero desea retirar?" << endl;
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
        }

        case 'q':
        case 'Q':{
            cout << "Ha escogido la opcion SALIR\nHasta luego\n" << endl;
            salir = true;
            cambio = false;

            break;
        }

        case 'c':
        case 'C':{
            cout << "Ha escogido la opcion CAMBIAR CLAVE" << endl;
            cout << "Ingrese su nueva clave (Numero de 4 dígitos: [1000,9999])" << endl;
            int nueva_clave = 0;
            cin >> nueva_clave;
            if(nueva_clave < 1000 || nueva_clave > 9999){
                cout << "CLAVE INVALIDA" << endl;
            }
            else{
                ofstream clave_out_file("clave.txt");
                cambiar_clave(clave_out_file, nueva_clave);
                clave_out_file.close();
                cout << "Su clave ha sido cambiada\n" << endl;
            }

            break;
        }

        default:{

            cout << "Opcion incorrecta" << endl;
            cambio = false;

        }
    }

    double nuevo_saldo = saldo + dinero_a_mover;

    if(cambio == true){ //Si hubo cambios se imprime el nuevo saldo

        ofstream out_file("saldo.txt"); //Se cambia el saldo dependiendo cuanto dinero se mueve
        mover_dinero(out_file, nuevo_saldo);
        out_file.close();

        ifstream in_file("saldo.txt"); //Se lee el nuevo saldo
        cout  << fixed << setprecision(4) << consultar_saldo(in_file) << " pesos.\n" << endl;
        in_file.close();

    }

    return salir;
}

void ciclo_clave(){

    ifstream clave_in_file("clave.txt");
    int clave_correcta = get_clave(clave_in_file);
    clave_in_file.close();

    int intentos = 3;

    while(pedir_clave(clave_correcta) == false){
        intentos --;
        if(intentos >= 1){
            cout << "CLAVE INCORRECTA. Por favor vuelva a intentar (" << intentos << " intentos restantes)" << endl << endl;
        }
        if(intentos == 0){
            bloquear_sistema();
            while(true){ //Ciclo infinito
            }
        }
    }
    cout << "Clave correcta\n" << endl;
}

int main(){

    ciclo_clave();

    bool salir = false;

    do{
        impr_menu();
        char opcion_elegida = ' ';
        cin >> opcion_elegida;
        salir = get_function(opcion_elegida);
    }
    while(salir == false);

    system("PAUSE");
    return 0;
}
