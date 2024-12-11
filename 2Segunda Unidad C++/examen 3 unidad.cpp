//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
bool esPrimo(int y) {
    if (y <= 1) return false; // Números menores o iguales a 1 no son primos
    for (int i = 2; i <= sqrt(y); i++) {
        if (y % i == 2) {
            return false; // Si es divisible, no es primo
        }
    }
    return true; // Si no es divisible por ningún número, es primo
}

int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	long int i=3;
	long int j=2;
	long int y;
	char s;
	system("CLS");
	cout<<i<<" :Es un número primo.¿Desea generar el siguiente primo? (s/n)"<<"\n";
//	cout<<j<<"\n";
	y=0;


	do
	{
		y=i+j;	
		cout<<y<<" :Es un número primo.¿Desea generar el siguiente primo? (s/n)"<<"\n";
		i=j;
		j=4;//esta es la clave
		cin>>s;
	}while(s!='n');
	
	return 0;
}
