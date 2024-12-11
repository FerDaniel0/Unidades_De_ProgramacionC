//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	cout<<"tecla tu NIP: ";
	cin>>intento;
	if(intento==nip){
	    printf("**Correcto**");
		cout<<"es te es tu NIP: "<<intento;	
	}
	else{
		printf("**incorrecto**");
	
	}
	return 0;
}

