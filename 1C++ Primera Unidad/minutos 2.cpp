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
	
	float minutos, horas, residuos, min2;
	cout<<"Dame la cantidad de minutos a convertir: ";
	cin>>minutos;
    
    horas=trunc(minutos/60);
    residuos=(minutos/60 )-trunc(minutos/60);
    min2=residuos*60;
    cout<<minutos<<"minutos equivale a"<<horas<<":"<<minutos<<"\n";
    printf("%2.0f minutos equivalen a %02.0f : %02.0f",minutos,horas,min2);
	return 0;
}