	//Juan Daniel Simental mendoza 24041241
#include <iostream> //programa que suma vectores y matrices
#include<time.h>//random
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main( )
{
	int v1[10],r;
	int i;
	srand(time(0));
	
	for(i=0;i<120;i++){
		cout<<"*";
	}
	for(i=0;i<29;i++){

		cout<<"*\n";
	}
	for(i=0;i<120;i++){
		gotoxy(i,29);
		cout<<"*";
	}
		for(i=0;i<29;i++){
		gotoxy(119,i);
		cout<<"*";
	}
	gotoxy(72,10);
	cout<<"Impresion del vector";
	for(i=0;i<10;i++){	
		v1[i]=rand()%10;
		gotoxy(60,i+9);
		printf("%d",v1[i]);
}
gotoxy(5,40);

cout<<"\n";



	return 0;
}