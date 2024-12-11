//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,y=1;
	cout<<"Lectura de 5 números enteros usando do while\n";
	do{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
		   continue;
		   y++;
	}while(y<6);
	system("pause");
	system("cls");
	cout<<"Lectura de 5 números enteros usando for estandar\n";
	for(y=1;y<6;y++){
	 cout<<"Dame un número que no sea o(intento #"<<y<<")\n";	
	 cin>>x;
	 if(x==0)
	   continue;
	  cout<<"Por aqui pasa solo cuando el nuemro es diferente de o\n";
    }
return 0;
}