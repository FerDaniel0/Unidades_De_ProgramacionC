#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int semi2 = 1;
    float total = 1; // Comienza en 1

    cout << "Número total inicial: " << total << "\n";

    // Comienza el bucle
    while (true) {
        cout << "Presiona espacio para continuar, o cualquier otra tecla para salir.\n";
        if (GetAsyncKeyState(VK_SPACE)) {
            semi2++;  // Incrementa semi2 para la siguiente suma
            total += semi2;  // Suma semi2 al total
            cout << "Número total: " << total << "\n";
            Sleep(100);  // Espera un momento para evitar múltiples pulsaciones
        } else {
            break;  // Sale del bucle si se presiona otra tecla
        }
    }
    
    return 0;
}
