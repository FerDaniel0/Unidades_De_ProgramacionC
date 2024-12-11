//juan daniel simental mendoza 24041241
#include<windows.h>
#include<iostream>
#include<time.h>

using namespace std;
int potencia(int n, int e);
int main(){
	
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    int num, exponente;
    
    cout<<"Dime el número a elevar: ";
    cin>>num;
    cout<<"Dime la potencia: ";
    cout<<num<<" elevado a la "<<exponente<<"="<<potencia(num, exponente);
    
    return 0;
}
int potencia(int n, int e){
	int i=1;
	int resultado=n;
	for(i=1;i<e;i++){
		resultado=resultado*n;
	}
	return resultado;
}