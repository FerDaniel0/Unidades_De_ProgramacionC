	//Juan Daniel Simental mendoza 24041241
#include <windows.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int x;
string micadena = "Hola mundo";
cout<<"La cadena original es: "<<micadena<<endl;
char letra = micadena[0];
cout<<"La primera letra es: "<<letra<<endl;
micadena[1] ='e';
cout<<"La cadena modificada es: "<<micadena<<endl;
for(x=0;x<micadena.length();x++){
	cout<<micadena[x]<<"\n";
}

return 0;
}