	//Juan Daniel Simental mendoza 24041241
#include <windows.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

char c[11]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','\n'};
int i=0;
puts("Captura de una cadena" );
for(i=0;i<11;i++){
	printf("Dame el elemento No. %d\n ",i);
	fflush(stdin);
	c[i]=getchar();
}
puts("impresion de la cadena ");
for(i=0;i<11;i++);{
   c[i]=toupper(c[i]);
   printf("%c",c[1]);
       
}

return 0;
}