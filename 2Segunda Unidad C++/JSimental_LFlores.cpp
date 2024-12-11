//Juan Simental 24041241
//Luis FLores 24041174
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;
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
	y=0;
	do
	{
		y=i+j;	
		cout<<y<<" :Es un número primo.¿Desea generar el siguiente primo? (s/n)"<<"\n";
		i=j;
		j=y;//esta es la clave
		cin>>s;
	}while(s!='n');
	return 0;
}
