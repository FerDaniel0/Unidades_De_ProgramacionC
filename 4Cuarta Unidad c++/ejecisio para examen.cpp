#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función para cifrar una palabra, asignando valores únicos a cada letra
vector<int> cifrarPalabra(const string& palabra) {
    vector<int> valoresCifrados;
    
    // Asignamos un valor único a cada letra
    for (char c : palabra) {
        int valor = 0;
        if (c >= 'a' && c <= 'z') {
            valor = c - 'a' + 1;  // Asigna un valor único entre 1 y 26 a las letras
        } else {
            valor = 0;  // Valor 0 si no es una letra válida
        }
        valoresCifrados.push_back(valor);
    }
    
    return valoresCifrados;
}

// Función para descifrar la palabra cifrada
string descifrarPalabra(const vector<int>& valoresCifrados) {
    string palabraDescifrada = "";
    
    for (int valor : valoresCifrados) {
        char letra = '?';  // Valor por defecto en caso de error
        if (valor >= 1 && valor <= 26) {
            letra = 'a' + valor - 1;  // Convertir el número de vuelta a la letra
        }
        palabraDescifrada += letra;
    }
    
    return palabraDescifrada;
}

int main() {
    string palabra;
    cout << "Ingresa una palabra para cifrar (solo letras minúsculas): ";
    cin >> palabra;
    
    // Verificar que solo se ingresen letras minúsculas
    for (char c : palabra) {
        if (c < 'a' || c > 'z') {
            cout << "Error: solo se permiten letras minúsculas." << endl;
            return 1;  // Salir con un código de error
        }
    }
    
    // Cifrar la palabra
    vector<int> valoresCifrados = cifrarPalabra(palabra);
    
    // Mostrar la palabra cifrada
    cout << "Palabra cifrada: ";
    for (int valor : valoresCifrados) {
        cout << valor << " ";  // Mostrar los valores de la palabra cifrada
    }
    cout << endl;
    
    // Mostrar la palabra descifrada
    string palabraDescifrada = descifrarPalabra(valoresCifrados);
    cout << "Palabra descifrada: " << palabraDescifrada << endl;
    
    return 0;
}

