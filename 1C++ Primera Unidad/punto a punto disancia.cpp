//juan Daniel Simental Mendoza 24041241
#include <iostream>
#include <cmath> // Para sqrt y pow

using namespace std;

int main() {
    float x1, y1, x2, y2, distancia;

    // Solicitar las coordenadas del primer punto
    cout << "Dame el número de x1: ";
    cin >> x1;
    cout << "Dame el número de y1: ";
    cin >> y1;

    // Solicitar las coordenadas del segundo punto
    cout << "Dame el número de x2: ";
    cin >> x2;
    cout << "Dame el número de y2: ";
    cin >> y2;

    // Calcular la distancia entre los dos puntos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Mostrar la distancia redondeada
    cout << "Esta es la distancia entre los dos puntos: " << round(distancia) << endl;

    return 0;
}
/*pow(x, 2) se usa para elevar al cuadrado las diferencias entre las coordenadas.
sqrt se usa para calcular la raíz cuadrada de la suma de los cuadrados.*/
