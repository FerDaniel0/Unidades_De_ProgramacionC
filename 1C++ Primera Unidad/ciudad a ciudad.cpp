//juan Daniel Simental Mendoza 24041241
#include <iostream>
#include <cmath> // Para las funciones floor y fmod

using namespace std;

int main() {
    float HH, MM, SS, T, HHda, MMda, SSda;
    float TotalSSalida, TotalSeLle;

    // Solicitar la hora de salida
    cout << "Dame las horas de la salida: ";
    cin >> HH;
    cout << "Dame los minutos de la salida: ";
    cin >> MM;
    cout << "Dame los segundos de la salida: ";
    cin >> SS;
    
    // Solicitar los segundos para llegar a la ciudad B
    cout << "Dame los segundos para llegar a la ciudad B: ";
    cin >> T;

    // Calcular el total de segundos de salida
    TotalSSalida = HH * 3600 + MM * 60 + SS;
    
    // Calcular el total de segundos al llegar
    TotalSeLle = TotalSSalida + T;

    // Calcular la hora de llegada
    HHda = floor(TotalSeLle / 3600);
    MMda = floor(fmod(TotalSeLle, 3600) / 60);
    SSda = fmod(TotalSeLle, 60);

    // Mostrar la hora de llegada
    cout << "Hora de llegada a la ciudad B: " << round(HHda) << " horas " 
         << round(MMda) << " minutos " << round(SSda) << " segundos." << endl;

    return 0;
}
