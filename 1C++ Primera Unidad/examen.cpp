//juan Daniel Simental Mendoza 24041241
#include <iostream>
#include <cmath> // Para round
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <conio.h> 
#include <windows.h>
using namespace std;

int main() {
    // Declaración de variables
    string Nombre;
    float gana, empa, perdi, TotDeParti, puntos;
    const float Partidogana = 3, partidoempa = 1, partidoperdi = 0;
    float PcGana, Pcempa, Pcperdi;

    // Solicitar el nombre del equipo
    cout << "Dame el nombre del equipo: ";
    cin >> Nombre;
    cout << "Este es el nombre del equipo: " << Nombre << endl;

    // Solicitar datos de partidos ganados, empatados y perdidos
    cout << "Cuantos partidos ganados: ";
    cin >> gana;
    cout << "Cuantos partidos empatados: ";
    cin >> empa;
    cout << "Cuantos partidos perdidos: ";
    cin >> perdi;

    // Calcular los puntos obtenidos
    puntos = (Partidogana * gana) + (partidoempa * empa) + (partidoperdi * perdi);
    cout << "Esta es tu puntuación: " << puntos << endl;

    // Calcular el total de partidos
    TotDeParti = gana + empa + perdi;
    cout << "Este es tu total de partidos: " << TotDeParti << endl;

    // Calcular los porcentajes de partidos ganados, empatados y perdidos
    PcGana = (gana * 100) / TotDeParti;
    Pcempa = (empa * 100) / TotDeParti;
    Pcperdi = (perdi * 100) / TotDeParti;

    // Mostrar los porcentajes
    cout << "Este es tu porcentaje de partidos ganados: " << round(PcGana) << "%" << endl;
    cout << "Este es tu porcentaje de partidos empatados: " << round(Pcempa) << "%" << endl;
    cout << "Este es tu porcentaje de partidos perdidos: " << round(Pcperdi) << "%" << endl;

    // Calcular el porcentaje total (debería ser 100%)
    float PcTotal = PcGana + Pcempa + Pcperdi;
    cout << "Porcentaje total: " << round(PcTotal) << "%" << endl;

    return 0;
}
