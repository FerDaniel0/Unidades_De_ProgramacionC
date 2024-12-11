//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float expone,numero,resultado;
	cout<<"Dame el numero";
	cin>>numero;
	cout<<"Dame el exponente";
	cin>>expone;
	
	if(expone==0){
		resultado=1;
	}
	else{
		if(expone>0){
			resultado=pow(numero,expone);
		}
		else{
			resultado=1/pow(numero,abs(expone));
			
		}
	}
	printf("El resultado es: %5.5f\n",resultado);
	cout<<"El resultado es:"<<resultado;
	
	return 0;
}