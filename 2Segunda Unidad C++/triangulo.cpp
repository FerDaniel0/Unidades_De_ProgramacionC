//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int lado1, lado2, lado3;
	cout<<"Dame el lado 1: ";
	cin>>lado1;
	cout<<"Dame el lado 2: ";
	cin>>lado2;
	cout<<"Dame el lado 3: ";
	cin>>lado3;
	
	if(lado1==lado2 && lado1==lado3){
		cout<<"Tu triangulo es Equilatero";
	}
	else{
		if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
			cout<<"Tu triangulo es Isóseles";
		}
		else{
			cout<<"Tu triangulo es Escaleno";
			}
		}
	}
	
	