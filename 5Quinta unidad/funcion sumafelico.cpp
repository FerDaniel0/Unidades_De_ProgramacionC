//juan daniel simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;
void captura(char arreglo[]);
void imprimir(char arreglo[]);
void cifrar(char arreglo[]);
int main(){
	char arreglo[100];
	int i;
	
	captura(arreglo);
	cout<<"La palabra a cifrar es: ";
	imprimir(arreglo);
	cout<<"La palabra a cifrar es: ";.
	imprimir(arreglo);
	cout<<"La palabra cifrada es: ";
	cifrar(arreglo);
	imprimir(arreglo);
	cout<<"La palabra desifrada es: ";
	cifrar(arreglo);
	imprimir(arreglo);
	return 0;
}
void captura(char arreglo[]){
	cout<<"Dame la palabra a cifrar: ";
	gets(arreglo);
}
void imprimir(char arreglo[]){
	int i;
	for(i=0;arreglo[i]!='\0';i++){
		cout<<arreglo[i];
	}
	cout<<'\n';
}
void cifrar(char arreglo[]){
	int i;
	for(i=0;arreglo[i]!='\0';i++){
        char c=arreglo[i];
        char cifrado=' ';
        switch(arreglo[i]){
            case 's':arreglo[i]='u'; 
			break;
            case 'f':arreglo[i]='a'; 
			break;
            case 'm':arreglo[i]='e'; 
			break;
            case 'l':arreglo[i]='i'; 
			break;
            case 'c':arreglo[i]='o'; 
			break;
            case 'u':arreglo[i]='s';
		    break;
            case 'a':arreglo[i]='f'; 
			break;
            case 'e':arreglo[i]='m'; 
			break;
            case 'i':arreglo[i]='l'; 
			break;
            case 'o':arreglo[i]='c'; 
			break;
            default:arreglo[i]=tolower(c); 
		}
	}
}