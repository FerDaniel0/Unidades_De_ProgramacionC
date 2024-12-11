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
	
	
	int horasalida, minsalida, segsalida, seginicial, segfinal;
	int segviaje, horalleda, minillegada, segllegada;
	
	
	cout<<"Dime las horas de salida: ";
	cin>>horasalida;
	
	cout<<"Dime las minutos de salida: ";
	cin>>minsalida;
	
	cout<<"Dime las segundos de salida: ";
	cin>>segsalida;
	
    cout<<"Dime el tiempo dura el viaje(segundos): ";
	cin>>segviaje;
	
	seginicial = horasalida * 3600 + minsalida * 60 + segsalida;
	
	segfinal = seginicial + segviaje;
	
	horalleda = trunc(segfinal / 3600);
	
	minillegada = trunc((segfinal % 3600) / 60);
	
	segllegada = (segfinal % 3600) % 60;
	
	cout<<"Hora de llegada: ";
	cout<<horalleda<<":"<<minillegada<<":"<<segllegada<<"\n";
	
	printf("Hora de llegada: %02d:%02d:%02d",horalleda, minillegada, segllegada );
	
	
	
	


}

	
	
	
	
	
	
	