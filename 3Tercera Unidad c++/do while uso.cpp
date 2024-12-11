//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,edad;
	char nom[10];
	//se puede usar p/una csntidad prestablecida de vueltas
	x=1;/*si no se inicializa al menos se ejecuta una vez*/
	do{
	cout<<x<<"\n";
	x++;	/*variacion*/
	}while(x<10);/*condicion*/
	system("pause");
	/*también se usa p/una cantidad desconocida de vueltas*/
	system("cls");
	do{
		cout<<"Dame la edad, <<-1 para terminar";
		cin>>x;
	} while(x!=-1);
	system("pause");
	/* se usa especialmente en menus y validaciones */
	do{
		system("cls");
		gotoxy(10,10);
		cout<<"Menu principal";
		gotoxy(10,11);
		cout<<"1.- Lee el nombre";
		gotoxy(10,12);
		cout<<"2.- Lee la edad";
		gotoxy(10,13);
		cout<<"3.- imprime los datos";
		gotoxy(10,14);
		cout<<"4.- Terminar";
		gotoxy(10,15);
		cout<<"Seleciona uan opcion <1-4>";
		do{
			gotoxy(30,10);
			cout<<".";
			gotoxy(30,10);
			cin>>x;
		}while(x<0 or x>4);
		switch(x){
			case 1:
				cout<<"Dame tu nombre ";
				fflush(stdin);
				gets(nom);
				break;
				
			case 2:
				cout<<"Dame tu edad ";
				cin>>edad;
				break;
				
			case 3:
					
				cout<<"Nombre: "<<nom<<"\n";
				cout<<"Edad: "<<edad<<"\n";
				system("pause");
		}
	}while(x!=4);
	return 0;
}