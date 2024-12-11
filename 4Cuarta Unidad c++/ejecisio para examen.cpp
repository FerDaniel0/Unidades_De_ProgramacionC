#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funci�n para cifrar una palabra, asignando valores �nicos a cada letra
vector<int> cifrarPalabra(const string& palabra) {
    vector<int> valoresCifrados;
    
    // Asignamos un valor �nico a cada letra
    for (char c : palabra) {
        int valor = 0;
        if (c >= 'a' && c <= 'z') {
            valor = c - 'a' + 1;  // Asigna un valor �nico entre 1 y 26 a las letras
        } else {
            valor = 0;  // Valor 0 si no es una letra v�lida
        }
        valoresCifrados.push_back(valor);
    }
    
    return valoresCifrados;
}

// Funci�n para descifrar la palabra cifrada
string descifrarPalabra(const vector<int>& valoresCifrados) {
    string palabraDescifrada = "";
    
    for (int valor : valoresCifrados) {
        char letra = '?';  // Valor por defecto en caso de error
        if (valor >= 1 && valor <= 26) {
            letra = 'a' + valor - 1;  // Convertir el n�mero de vuelta a la letra
        }
        palabraDescifrada += letra;
    }
    
    return palabraDescifrada;
}

int main() {
    string palabra;
    cout << "Ingresa una palabra para cifrar (solo letras min�sculas): ";
    cin >> palabra;
    
    // Verificar que solo se ingresen letras min�sculas
    for (char c : palabra) {
        if (c < 'a' || c > 'z') {
            cout << "Error: solo se permiten letras min�sculas." << endl;
            return 1;  // Salir con un c�digo de error
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

