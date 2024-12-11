//juan Daniel Simental Mendoza 24041241
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <conio.h> 
#include <windows.h>
using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    string Nombre;
    float gana, empa, perdi, TotDeParti, puntos, maxPuntos, porcentajePuntos;
    float Partidogana = 3, partidoempa = 1, partidoperdi = 0;

    cout << "Dame el nombre del equipo: ";
    cin >> Nombre;
    cout << "Este es el nombre del equipo: " << Nombre << endl;

    cout << "Cuantos partidos ganados: ";
    cin >> gana;
    cout << "Cuantos partidos empatados: ";
    cin >> empa;
    cout << "Cuantos partidos perdidos: ";
    cin >> perdi;

    puntos = (Partidogana * gana) + (partidoempa * empa) + (partidoperdi * perdi);
    cout << "Esta es tu puntuación: " << puntos << endl;

    TotDeParti = gana + empa + perdi;
    cout << "Este es tu total de partidos: " << TotDeParti << endl;

    // Cálculo del porcentaje de puntos obtenidos
    maxPuntos = TotDeParti * Partidogana; // El máximo de puntos si se ganaran todos los partidos
    porcentajePuntos = (puntos / maxPuntos) * 100; // Cálculo del porcentaje de puntos obtenidos

    cout << "Porcentaje de puntos obtenidos: " << round(porcentajePuntos) << "%" << endl;

    return 0;
}

