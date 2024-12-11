//juan Daniel Simental Mendoza 24041241
#include <iostream>
#include <windows.h> // Para SetConsoleOutputCP y SetConsoleCP

using namespace std;

int main() {
    // Configuración para usar UTF-8 en la consola
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float num1, num2, sum, res, mul, div;
    int opcion;

    // Solicitar los números
    cout << "Dame el primer número: ";
    cin >> num1;
    cout << "Dame el segundo número: ";
    cin >> num2;

    // Pedir al usuario que seleccione la operación
    cout << "\nElige la operación que deseas realizar: " << endl;
    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Opción: ";
    cin >> opcion;

    // Calcular todas las operaciones
    sum = num1 + num2;
    res = num1 - num2;
    mul = num1 * num2;
    if (num2 != 0) {
        div = num1 / num2;
    }

    // Usar if para mostrar solo la operación seleccionada
    if (opcion == 1) {
        cout << "\nEsta es tu suma: " << sum;
    } else if (opcion == 2) {
        cout << "\nEsta es tu resta: " << res;
    } else if (opcion == 3) {
        cout << "\nEsta es tu multiplicación: " << mul;
    } else if (opcion == 4) {
        if (num2 != 0) {
            cout << "\nEsta es tu división: " << div;
        } else {
            cout << "\nError: No se puede dividir entre cero.";
        }
    } else {
        cout << "\nOpción no válida.";
    }

    return 0;
}

