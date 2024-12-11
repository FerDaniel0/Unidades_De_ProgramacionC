//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=1;
	string clave;
	for(;x<4;x++){
	  printf("Dame tu password (intento #%d) ",x);
	  getline(cin,clave);
	  if(clave=="soloyolose");
	    break;
	}
	if(x==4)
	   puts("\ausuario no autorizado");
	else	
	   printf("binbenido al intento #%d",x);
return 0;	
}