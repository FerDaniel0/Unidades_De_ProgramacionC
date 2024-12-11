//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    
    char tipo;
    int tamano;
    float inicial,kilos,total;
    cout<<"Dame el tipo de uva: ";
    cin>>tipo;
    tipo=toupper(tipo);
    cout<<"Dame el tamaño de la uva: ";
    cin>>tamano;
    
	if((tipo=='A' or tipo=='B') and (tamano==1 or tamano==2)){
		cout<<"Dime cuántos kilos de uva se venden: ";
		cin>>kilos;
		cout<<"Dime el precio incial por kilo: ";
		cin>>inicial;
		switch(tipo){
			case 'A':
			switch(tamano){
				case 1:
					inicial+=.2;
					break;
				case 2:
				    inicial+=.3;
					break;
				switch(tamano){
					case 'B':
					switch(tamano){
						case 1:
					inicial-=.3;
					break;
				case 2:
				    inicial-=.5;
					break;
					}
					
				}		
			} total=kilos*inicial;
	          cout<<"La venta total es de : "<<total;
		}
		
	}
	    else{
	    cout<<"Numero no valido\n";
		}
	
}