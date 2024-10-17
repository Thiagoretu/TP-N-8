#include<iostream>
#include<string>
using namespace std;

int contarPalabras(string cadena) {
    int contador = 1;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == ' ') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string frase;
    cout << "ingresa una frase: ";
    getline(cin, frase);
    
    cout << "la cantidad de palabras es: " << contarPalabras(frase) << endl;
    
    return 0;
}

