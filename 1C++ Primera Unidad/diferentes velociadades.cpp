//juan Daniel Simental Mendoza 24041241
#include <iostream>

using namespace std;

int main(){
    float v1, v2, di, tiempoM, tiempoH;

    // Solicitar la velocidad del vehículo más lento
    cout << "Dame la velocidad del vehículo más lento en km/h: ";
    cin >> v1;

    // Solicitar la velocidad del vehículo más rápido
    cout << "Dame la velocidad del vehículo más rápido en km/h: ";
    cin >> v2;

    // Solicitar la distancia entre los dos vehículos
    cout << "Dame la distancia entre los dos vehículos en km: ";
    cin >> di;

    // Calcular el tiempo en horas que tarda el vehículo más rápido en alcanzar al más lento
    tiempoH = di / (v2 - v1);

    // Convertir el tiempo a minutos
    tiempoM =( tiempoH * 60);

    // Mostrar el tiempo en minutos
    cout << "Esta es lo que tarda en alcanzar al primer vehículo en minutos: " << tiempoM << endl;

    return 0;
}
