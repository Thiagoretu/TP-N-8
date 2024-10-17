#include <iostream>
#include <string>
using namespace std;

bool buscarPalabra(const string& cadena, const string& palabra) {
    return cadena.find(palabra) != string::npos;  // Devuelve true si se encuentra la palabra
}

void imprimirResultado(bool encontrado, const string& palabra) {
    if (encontrado) {
        cout << "La palabra \"" << palabra << "\" se encuentra en la cadena." << endl;
    } else {
        cout << "La palabra \"" << palabra << "\" NO se encuentra en la cadena." << endl;
    }
}

int main() {
    string cadena, palabra;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool encontrado = buscarPalabra(cadena, palabra);
    
    imprimirResultado(encontrado, palabra);

    return 0;
}

