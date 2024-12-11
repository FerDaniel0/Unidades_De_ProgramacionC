//juan Daniel Simental Mendoza 24041241
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <conio.h> 
#include <windows.h>
using namespace std;
int main()
{
	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cad[80];
    int i,j,k;
    puts("Usando scanf con juegos de isnpección\n");
    puts("Dame una cadena con espacios");
    scanf(" %s[^\n] ",cad);
    cout<<cad<<"\n";
    
    fflush(stdin);
	puts("Dame una cadena de mayúsculas y espacios");
	scanf("%[A-ZA-Z]",cad);
	puts(cad);
	
	puts("Dame una cadena de Mayúsculas,Minúsculas y espacio");
	fflush(stdin);
	scanf("%[a-zA-ZñÑ]",cad);
	cout<<cad<<"\n";
	
	puts("Dame una cadena con cualquier caracter y termina con espacio ");
	fflush(stdin);
	scanf("%[^\n]",cad);
	cout<<cad<<"\n";
	
	puts("Dame 3 numeros enteros de maximo 3 cifras");
	fflush(stdin);
	scanf("%3d, %3d, #3d",&i, &j, &k);
	printf("%d, %d, %d", i,j,k);
	printf("a");
	return 0;
}