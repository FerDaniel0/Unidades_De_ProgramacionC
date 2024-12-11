#include <iostream>
#include <vector>
#include <string>
#include<time.h>
#include<windows.h>
#include<conio.h> 
#include <cstring>  // Para usar strlen

using namespace std;

// Función para cifrar una palabra o cadena de números
void cifrarDatos(const char* entrada, int* cifrado, int& tamaño) {
    tamaño = 0;  // Inicializamos el contador de tamaño
    
    // Recorremos la entrada caracter por caracter
    for (int i = 0; i < strlen(entrada); i++) {
        char c = entrada[i];
        
        // Si es una letra minúscula (a-z)
        if (c >= 'a' && c <= 'z') {
            cifrado[tamaño] = c - 'a' + 1;  // 'a' = 1, 'b' = 2, ..., 'z' = 26
        }
        // Si es una letra mayúscula (A-Z)
        else if (c >= 'A' && c <= 'Z') {
            cifrado[tamaño] = c - 'A' + 27;  // 'A' = 27, 'B' = 28, ..., 'Z' = 52
        }
        // Si es un número (0-9)
        else if (c >= '0' && c <= '9') {
            cifrado[tamaño] = -(c - '0');  // Se utiliza un valor negativo para los números
        }
        // Si es un espacio, lo representamos con un valor especial
        else if (c == ' ') {
            cifrado[tamaño] = -99;  // Representar espacio con -99
        }
        else {
            cifrado[tamaño] = -100;  // Para caracteres especiales
        }
        
        tamaño++;  // Aumentamos el tamaño del arreglo
    }
}

// Función para descifrar la secuencia de datos cifrados
void descifrarDatos(const int* cifrado, int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        int valor = cifrado[i];
        
        // Si es un número representando una letra
        if (valor >= 1 && valor <= 26) {
            cout << (char)(valor + 'a' - 1);  // Convierte el número a letra minúscula
        }
        else if (valor >= 27 && valor <= 52) {
            cout << (char)(valor + 'A' - 27);  // Convierte el número a letra mayúscula
        }
        // Si es un número negativo, lo tratamos como un número o espacio
        else if (valor < 0) {
            if (valor == -99) {
                cout << " ";  // Es un espacio
            } 
            else if (valor >= -9 && valor <= -1) {
                cout << -valor;  // Convertir el número negativo de vuelta a su valor numérico
            }
            else {
                cout << "[special]";  // Para caracteres especiales
            }
        }
    }
    cout << endl;  // Nueva línea después de mostrar el resultado
}

int main() {
    const int MAX = 100;  // Tamaño máximo de los arreglos
    char entrada[MAX];  // Arreglo para almacenar la entrada
    int cifrado[MAX];  // Arreglo para almacenar los datos cifrados
    int tamaño = 0;  // Variable para almacenar el tamaño de la secuencia cifrada
    
    // Solicitamos al usuario la entrada
    cout << "Ingresa la palabra o cadena de datos (puedes usar letras, numeros y espacios): ";
    cin.getline(entrada, MAX);  // Leemos la cadena incluyendo espacios
    
    // Cifrar la entrada
    cifrarDatos(entrada, cifrado, tamaño);
    
    // Mostrar el resultado cifrado
    cout << "Datos cifrados: ";
    for (int i = 0; i < tamaño; i++) {
        cout << cifrado[i] << " ";  // Mostrar los valores cifrados
    }
    cout << endl;

    // Mostrar los datos descifrados
    cout << "Datos descifrados: ";
    descifrarDatos(cifrado, tamaño);

    return 0;
}

