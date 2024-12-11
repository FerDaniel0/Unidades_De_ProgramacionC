#include <iostream>
#include <vector>
#include <string>
#include<time.h>
#include<windows.h>
#include<conio.h> 
#include <cstring>  // Para usar strlen

using namespace std;

// Funci�n para cifrar una palabra o cadena de n�meros
void cifrarDatos(const char* entrada, int* cifrado, int& tama�o) {
    tama�o = 0;  // Inicializamos el contador de tama�o
    
    // Recorremos la entrada caracter por caracter
    for (int i = 0; i < strlen(entrada); i++) {
        char c = entrada[i];
        
        // Si es una letra min�scula (a-z)
        if (c >= 'a' && c <= 'z') {
            cifrado[tama�o] = c - 'a' + 1;  // 'a' = 1, 'b' = 2, ..., 'z' = 26
        }
        // Si es una letra may�scula (A-Z)
        else if (c >= 'A' && c <= 'Z') {
            cifrado[tama�o] = c - 'A' + 27;  // 'A' = 27, 'B' = 28, ..., 'Z' = 52
        }
        // Si es un n�mero (0-9)
        else if (c >= '0' && c <= '9') {
            cifrado[tama�o] = -(c - '0');  // Se utiliza un valor negativo para los n�meros
        }
        // Si es un espacio, lo representamos con un valor especial
        else if (c == ' ') {
            cifrado[tama�o] = -99;  // Representar espacio con -99
        }
        else {
            cifrado[tama�o] = -100;  // Para caracteres especiales
        }
        
        tama�o++;  // Aumentamos el tama�o del arreglo
    }
}

// Funci�n para descifrar la secuencia de datos cifrados
void descifrarDatos(const int* cifrado, int tama�o) {
    for (int i = 0; i < tama�o; i++) {
        int valor = cifrado[i];
        
        // Si es un n�mero representando una letra
        if (valor >= 1 && valor <= 26) {
            cout << (char)(valor + 'a' - 1);  // Convierte el n�mero a letra min�scula
        }
        else if (valor >= 27 && valor <= 52) {
            cout << (char)(valor + 'A' - 27);  // Convierte el n�mero a letra may�scula
        }
        // Si es un n�mero negativo, lo tratamos como un n�mero o espacio
        else if (valor < 0) {
            if (valor == -99) {
                cout << " ";  // Es un espacio
            } 
            else if (valor >= -9 && valor <= -1) {
                cout << -valor;  // Convertir el n�mero negativo de vuelta a su valor num�rico
            }
            else {
                cout << "[special]";  // Para caracteres especiales
            }
        }
    }
    cout << endl;  // Nueva l�nea despu�s de mostrar el resultado
}

int main() {
    const int MAX = 100;  // Tama�o m�ximo de los arreglos
    char entrada[MAX];  // Arreglo para almacenar la entrada
    int cifrado[MAX];  // Arreglo para almacenar los datos cifrados
    int tama�o = 0;  // Variable para almacenar el tama�o de la secuencia cifrada
    
    // Solicitamos al usuario la entrada
    cout << "Ingresa la palabra o cadena de datos (puedes usar letras, numeros y espacios): ";
    cin.getline(entrada, MAX);  // Leemos la cadena incluyendo espacios
    
    // Cifrar la entrada
    cifrarDatos(entrada, cifrado, tama�o);
    
    // Mostrar el resultado cifrado
    cout << "Datos cifrados: ";
    for (int i = 0; i < tama�o; i++) {
        cout << cifrado[i] << " ";  // Mostrar los valores cifrados
    }
    cout << endl;

    // Mostrar los datos descifrados
    cout << "Datos descifrados: ";
    descifrarDatos(cifrado, tama�o);

    return 0;
}

