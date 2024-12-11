//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y;
	float z;
	
	/*for(x=0;x<=100;x+=1)
	{
		cout<<x<<",";
	}
	cout<<"\n";
	system("pause");*/
	
	/*for(x=100;x!=65;x-=5)
	{
		z<=sqrt(x);
		cout<<"La raiz cuadrada de"<<x<<"es"<<z<<"\n";	
	}
	system("pause");*/
	
	/*x=10;
	for(y=10;y!=x;++y)
	{
		cout<<y<<"Dentro del ciclo(nunca entra)\n";
	}
	cout<<y<<"Fuera del ciclo";
	system("pause");*/
	
	/*for(x=0,y=0;x+y<19;++x)
	{
		cout<<"Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<y<<"="<<x+y<<"El cilco continua mientras la suma sea menor que y ";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<"Fuera del ciclo";*/
	
	/*for(x=0;x!=123;)
	{
		cout<<"Dame el valor de x, 123 para terminar el ciclo: ";
		cin>>x;
	}
	system ("pause");*/
	
	/*x=1;
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x;//valoracion fuera de la sentencia for pero dentro del cuerpo del ciclo	
	}
	system("pause");*/
	
	
	cout<<"Hola mundo\n";
	for(x=0;x<1000000000;x++);//el ; hace que el cilco concluya aque
	{
		cout<<"Hola mundo despues de unos cuantos segundos";//No
	}
	return 0;
}