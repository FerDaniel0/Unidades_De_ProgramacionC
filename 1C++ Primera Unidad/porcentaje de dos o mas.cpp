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
	
	float pc,dc,to,desc,prec;
	cout<<"Dame el precio del articulo: ";
	cin>>pc;
	cout<<"Dame el descuento aplicado: ";
	cin>>dc;
	desc=pc*dc/100;
	to=pc-dc;
	cout<<"\nEste es el precio original: "<<pc<<"\nEste es el descuento aplicado: "<<dc;
	cout<<"\nEste es tu precio que tiene que pagar: "<<to;
	
	
	
	return 0;	
	}
