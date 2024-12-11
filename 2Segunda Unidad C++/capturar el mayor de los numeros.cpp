//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno,dos,tres,mayor;
	char nombre [20];
	gotoxy(10,2);
	cout<<"ISTITUTO TEGNOLOGICO DE DURANGO";
	gotoxy(10,3);
	cout<<"Fundamentos de programcion";
	gotoxy(10,4);
	cout<<"Programa que determina cúal es el mayor de 3 numeros: ";
	
	gotoxy(10,5);
	cout<<"Dime tu nombre: ";
	gets(nombre);
	gotoxy(10,6);
	cout<<"Dime tu primer numero: ";
	cin>>uno;
	gotoxy(10,7);
	cout<<"Dime tu segundo numero: ";
	cin>>dos;	
	gotoxy(10,8);
	cout<<"Dime tu terser numero: ";
	cin>>tres;
	
	if(uno>dos && uno>tres){
		mayor=uno;
	}	
	else {
		if(dos>uno && dos>tres){
			mayor=dos;
		}	
		else{
			mayor=tres;
		}	
    }
   gotoxy(10,9);
   cout<<nombre<<" :El mayor de lo tres nombres es: "<<mayor; 
   return 0;
}