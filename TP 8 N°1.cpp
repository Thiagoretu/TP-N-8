#include<iostream>
using namespace std;

int sumar(int num1, int num2) {
    cout << "sumando " << num1 << " + " << num2 << endl;
    return num1 + num2;
}

int restar(int num1, int num2) {
    cout << "restando " << num1 << " - " << num2 << endl;
    return num1 - num2;
}

int multiplicar(int num1, int num2) {
    cout << "multiplicando " << num1 << " * " << num2 << endl;
    return num1 * num2;
}

float dividir(float num1, float num2) {
    if (num2 == 0) {
        cout << "No se puede dividir por 0." << endl;
        return 0;
    } else {
        cout << "dividiendo " << num1 << " / " << num2 << endl;
        return num1 / num2;
    }
}

int main() {
    int x, y;
    char operacion;

    cout << "ingresa dos numeros: ";
    cin >> x >> y;

    cout << "elige la operacion (+, -, *, /): ";
    cin >> operacion;

    if (operacion == '+') {
        cout << "resultado: " << sumar(x, y) << endl;
    } 
    else if (operacion == '-') {
        cout << "resultado: " << restar(x, y) << endl;
    } 
    else if (operacion == '*') {
        cout << "resultado: " << multiplicar(x, y) << endl;
    } 
    else if (operacion == '/') {
        cout << "resultado: " << dividir(x, y) << endl;
    } 
    else {
        cout << "la operación no valida." << endl;
    }

    return 0;
}


