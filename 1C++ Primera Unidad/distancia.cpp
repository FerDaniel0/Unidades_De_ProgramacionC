//juan Daniel Simental Mendoza 24041241
#include <iostream>
#include <cmath> // Para abs

using namespace std;

int main() {
    float num1, num2;
    int distancia;

    // Solicitar los números
    cout << "Dame el número 1: ";
    cin >> num1;
    cout << "Dame el número 2: ";
    cin >> num2;

    // Calcular la distancia utilizando el valor absoluto
    distancia = abs(num1 - num2);

    // Mostrar la distancia
    cout << "Esta es tu distancia: " << distancia << endl;

    return 0;
}
