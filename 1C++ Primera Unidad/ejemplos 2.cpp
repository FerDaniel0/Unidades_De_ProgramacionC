//juan Daniel Simental Mendoza 24041241
#include <stdio.h>
#include <iostream> 
#include <conio.h> 
using namespace std;
int main()
{
int entera;
float flotante;
char letra,palabra[50];
cout<<"lectura de datos uando scanf\n ";
cout<<"dame un valor entero:";
fflush(stdin);	
scanf("%d",&entera);
fflush(stdin);
cout<<"dame un valor flotante: ";
fflush(stdin);
scanf("%f",&flotante);
cout<<"Dame una letra";
scanf("%c",&letra);
cout<<"dame un  cadena sin espacios:";
fflush(stdin);
scanf("%s",&palabra);//*sin espacios*/
puts("impresion de lso valores\n:");
cout<<entera<<"\n";
cout<<flotante<<"\n";
putchar(letra);
puts("\n");
puts(palabra);
system("pause");
cout<<"Dame un entero, un flotante, un char y una cadena sin espacio";
fflush(stdin);
scanf("%d, %f, %c, %s",entera,flotante,letra,palabra);/*sin espacio*/
puts ("imprecion de los valores\n");
cout<<entera<<("/n");
cout<<flotante<<"/n";
putchar(letra);
puts("/n");
cout<<fixed;
cout.precision(4);
cout<<"impresion con precision. El valor flotante de 4 decimales"<<flotante;
return 0;

	
	
	
	
}