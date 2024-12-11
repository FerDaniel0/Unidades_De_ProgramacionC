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
	char letras[20]="Hexadecimal\n";
	int i;
	float f;
	/*i=10;
	f=123.45;
	c='x';
	printf("impresión  simple\n");
	printf("La variable char tiene un valor de %c\n variant=%d\n varFloat=%f\n cadena=%s ",c,i,f,letras);
	system("pause");
	printf("Impresion sin espacio\n");
	printf("%d%f%c%s\n",i,f,c,letras);
	printf("Impresion con etiquetas\n");
	printf("Entero=%i flotante=%f caracter=%c cadena=%s");
	system("pause");
	
	printf("Dame un entero");
	fflush(stdin);
	scanf("%i",&i);
	
	printf("Dame un flotante");
	fflush(stdin);
	scanf("%f",&f);
	
	puts("Dame un caracter");
	fflush(stdin);
	sscanf("%c[a-zA-ZñÑ]",&c);
	cout<<c<<"\n";
	
	printf("Dame una cadena");
	fflush(stdin);
	scanf("%[^\n]",letras);
	printf("Entero=%i flotante=%f caracter=%c cadena=%s");*/
		
	i=12345;
	f=345.678;
	printf("%3d, %5d, %8d\n",i,i,i);
	printf("%3d, %5d, %8d\n",i,10,20);
	printf("%3d, %5d, %8d\n",i,i,i);
	printf("%d, %d, %d\n",i,10,20);
	system("pause");
	printf("Probamos anchos en exp: 3, 10 y 16 espacios\n");
	printf("%3e %13e %16e\n",f,f,f);
	system("pause");
	f=123.456; 
	printf("Probando diferentes cantidades de cifras 7.0, 7.3 y 7.1\n");
	printf("%7.0f %7.3f %7.1f\n",f,f,f); /*123.456000 123.456    123.5 el último se
	redondea y se le agregan espacios al inicio. Puede especificarse solo el n° de
	decimales*/
	system("pause");
	printf("Especificando solo las cifras decimales 1 decimal\n");
	printf("%.1f\n",f);//123.5, sin espacios
	system("pause");
	//precisión aplicándose a cadenas
	printf("Probando diferentes precisiones en cadenas: 10, 15 y 15.5 y .5\n");
	printf("%10s %15s %15.5s %.5s",letras,letras, letras,letras);
	system("pause");
	printf("Impresion con signo: %+d\n", i);
	printf("Impresion con espacios al principio y al final del dato y con ceros\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%-3d %-5d %-8d\n",i,i,i);
	printf("%03d %05d %08d\n",i,i,i);
	system("pause");
	printf("%d en octal es %#o y en hexadecimal es %#x", i,i,i);

	
	return 0;
}