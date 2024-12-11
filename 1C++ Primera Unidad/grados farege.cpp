//juan Daniel Simental Mendoza 24041241
#include <iostream>

using namespace std;

int main() {
    float gradosf, gradosc;

    // Solicitar la temperatura en Fahrenheit
    cout << "Dame la temperatura en Fahrenheit: ";
    cin >> gradosf;

    // Convertir Fahrenheit a Celsius
    gradosc = (gradosf - 32) * 5 / 9;

    // Mostrar el resultado
    cout << gradosf << " grados Fahrenheit equivalen a " << gradosc << " grados Celsius." << endl;

    return 0;
}
