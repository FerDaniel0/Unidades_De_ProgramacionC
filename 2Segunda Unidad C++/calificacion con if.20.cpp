//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1,cal2,cal3,prom;
	cout<<"Dime el nombre: ";
	cin>>nombre;
	cout<<"Dime la calificacion 1: ";
	cin>>cal1;
	cout<<"Dime la calificacion 2: ";
	cin>>cal2;
	cout<<"Dime la calificacion 3: ";
	cin>>cal3;
	
	prom=(cal1+cal2+cal3)/3;
	
	cout<<nombre<<", tu promedio es: "<<prom<<", y tu calificaion es de: ";
	if(prom>=90){
		cout<<"A";
	}
	else{
		if(prom>=80){
			cout<<"B";
		}
		else{
			if(prom>=70){
				cout<<"C";
			}
			else{
				if(prom>=60){
					cout<<"D";
				}
				else{
					if(prom<=60){
						cout<<"No pasaste pa";
					}
					
				}
				
			}
		}
	}
	return 0;
}
