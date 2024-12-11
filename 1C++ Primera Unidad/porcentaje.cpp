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
	int numh, numm, total;
	float pcth,pctm;
	cout<<"Dime la cantidad de hombres asistentes: ";
	cin>>numh;
	cout<<"Dime la cantidad de mujeres asistentes: ";
	cin>>numm;
	
	total=numh+numm;
	cout<<"El total de asistencia es; "<<total<<"\n";
	pcth=numh*100/total;
	pctm=numm*100/total;
	cout<<"Hombres: "<<pcth<<"%"<<"Mujeres: "<<pctm<<"%";
		
	
	
	
	}
	