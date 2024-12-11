#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funci�n para cifrar una palabra asignando valores a cada letra
vector<int> cifrarPalabra(const string& palabra) {
    vector<int> valoresCifrados;
    
    // Recorremos cada letra de la palabra con un bucle cl�sico
    for (int i = 0; i < palabra.length(); i++) {
        char c = palabra[i];
        int valor = 0;
        
        // Cifrar las letras min�sculas
        if (c >= 'a' && c <= 'z') {
            valor = c - 'a' + 1; // 'a' = 1, 'b' = 2, ..., 'z' = 26
        } 
        // Si la letra es inv�lida, asignar 0
        else {
            valor = 0;
        }
        
        valoresCifrados.push_back(valor);
    }
    
    return valoresCifrados;
}

// Funci�n para descifrar una palabra basada en los valores cifrados
string descifrarPalabra(const vector<int>& valoresCifrados) {
    string palabraDescifrada = "";
    
    // Recorremos los valores cifrados con un bucle cl�sico
    for (int i = 0; i < valoresCifrados.size(); i++) {
        int valor = valoresCifrados[i];
        char letra = '?'; // Valor por defecto si hay un error
        
        if (valor >= 1 && valor <= 26) {
            // Convertir el n�mero de vuelta a la letra
            letra = static_cast<char>('a' + valor - 1);  
        }
        
        palabraDescifrada += letra;
    }
    
    return palabraDescifrada;
}

int main() {
    string palabra;
    cout << "Ingresa una palabra para cifrar (solo letras min�sculas): ";
    cin >> palabra;
    
    // Verificar que la entrada contiene solo letras min�sculas
    for (int i = 0; i < palabra.length(); i++) {
        char c = palabra[i];
        if (c < 'a' || c > 'z') {
            cout << "Error: solo se permiten letras min�sculas." << endl;
            return 1;  // Salir con un error si hay caracteres no v�lidos
        }
    }

    // Cifrar la palabra
    vector<int> valoresCifrados = cifrarPalabra(palabra);
    
    // Mostrar la palabra cifrada (valores)
    cout << "Palabra cifrada (como n�meros): ";
    for (int i = 0; i < valoresCifrados.size(); i++) {
        cout << valoresCifrados[i] << " ";  // Mostrar los valores de la palabra cifrada
    }
    cout << endl;
    
    // Mostrar la palabra descifrada
    string palabraDescifrada = descifrarPalabra(valoresCifrados);
    cout << "Palabra descifrada: " << palabraDescifrada << endl;
    
    return 0;
}

