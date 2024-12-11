//juan Daniel Simental Mendoza 24041241
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <conio.h> 
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	char c;
	char letras[20]="Hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	printf("impresión  simple\n");
	printf("%c %i %f %s",c,i,f,letras);
	return 0;
}