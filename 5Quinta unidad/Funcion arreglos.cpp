#include<stdio.h>
#include<iostream>
using namespace std;
void modificarArreglosChar(char(&arregloChar)[5]);
void modificarArreglosInt(int(&arregloInt)[5]);
int main(){
	//Funcion que modifica el arreglo char
	char arregloChar[]="Hola";
	//Funcion que modifica el arreglo int
	int arregloInt[]={1,2,3,4,5};
	cout<<"Arreglo char original: "<<arregloChar<<'\n';
	cout<<"Arreglo int original: ";
	for(int i=0;i<5;i++){
		cout<<arregloInt[i]<<" ";
		cout<<'\n';
		modificarArreglosChar(arregloChar);
		modificarArreglosInt(arregloInt);
		cout<<"Arreglo char original: "<<arregloChar<<'\n';
	    cout<<"Arreglo int original: ";
	}
	for(int i=0;i<5;i++){
		cout<<arregloInt[i]<<" ";
		return 0;
	}
	
	void modificarArreglosChar(char(&arregloChar)[5])
	{
		for(int i=0;i<5;i++){
		arregloChar[i]='X';
	    }
    }
	void modificarArreglosInt(int(&arregloInt)[5])
	{
		for(int i=0;i<5;i++){
		arregloInt[i]*=2;
	   }
    }
}
