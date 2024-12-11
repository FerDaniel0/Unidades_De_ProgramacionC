//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	cout<<"Hola, esta es una pruba de limpieza de pantalla: "<<endl;
	system("pause");
	system("cls");//limpia la pantalla
	system("pause");
	cout<<"La pantalla se ha limpiado: "<<endl;
	return 0;
}