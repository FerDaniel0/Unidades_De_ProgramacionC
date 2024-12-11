	//Juan Daniel Simental mendoza 24041241
#include <windows.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

char cadena[1000];
int len,i;


cout<<"Dame una palabra en minúsculas: ";
gets(cadena);
len=strlen(cadena);//longuitud de la cadena 
for(i=0;i<len;i++){
    cadena[i]=toupper(cadena[i]);//convierte a mayúsculas
}
cout<<"La cadenaen mayúsculas es: "<<cadena<<endl;
cout<<"Imprecion elementos por elemntos\n ";
for(int i=0;i<len;i++){
    cout<<"cadena ["<<i<<"]="<<cadena[i]<<"\n";
}
return 0;    

}