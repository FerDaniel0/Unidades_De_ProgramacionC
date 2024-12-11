//Juan simental 24041241
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
    float gana, empa, perdi, TotDeParti, puntos;
    float Partidogana = 3, partidoempa = 1, partidoperdi = 0;
    float PcGana, Pcempa, Pcperdi;
    
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
    
    PcGana = (gana * 100) / TotDeParti;
    Pcempa = (empa * 100) / TotDeParti;
    Pcperdi = (perdi * 100) / TotDeParti;
    
    cout << "Este es tu porcentaje de partidos ganados: " << round(PcGana) << "%" << endl;
    cout << "Este es tu porcentaje de partidos empatados: " << round(Pcempa) << "%" << endl;
    cout << "Este es tu porcentaje de partidos perdidos: " << round(Pcperdi) << "%" << endl;
    
    float PcTotal = PcGana + Pcempa + Pcperdi;
    cout << "Porcentaje total: " << round(PcTotal) << "%" << endl;

    return 0;
}
