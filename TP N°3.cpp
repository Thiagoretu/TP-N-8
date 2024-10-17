#include<iostream>
using namespace std;

int main() {
    float valor;
    char opcion;

    cout << "ingrese el valor que desea convertir: ";
    cin >> valor;

    cout << "elija la conversión que desea realizar:\n";
    cout << "a) bytes a kilobytes\n";
    cout << "b) terabytes a megabytes\n";
    cout << "c) gigabytes a petabytes\n";
    cout << "ingrese la opcion (a, b, c):\n ";
    cin >> opcion;

    if (opcion == 'a') {
        cout << valor << " bytes son " << valor / 1024 << " kilobytes.\n";
    } 
    else if (opcion == 'b') {
        cout << valor << " terabytes son " << valor * 1024 * 1024 << " megabytes.\n";
    } 
    else if (opcion == 'c') {
        cout << valor << " gigabytes son " << valor / 1024 / 1024 << " petabytes.\n";
    } 
    else {
        cout << "opción no valida.\n";
    }

    return 0;
}

