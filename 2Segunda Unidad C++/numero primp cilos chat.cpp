#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

bool esPrimo(int num) {
    if (num <= 1) return false; // Números menores o iguales a 1 no son primos
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // Si es divisible, no es primo
        }
    }
    return true; // Si no es divisible por ningún número, es primo
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num;
    cout << "Dame un número mayor que 1: ";
    cin >> num;
    
    if (num > 1) {
        if (esPrimo(num)) {
            cout << num << " es un número primo." << endl;
        } else {
            cout << num << " no es un número primo." << endl;
        }
    } else {
        cout << "." << endl;
    }
    
    return 0;
}
