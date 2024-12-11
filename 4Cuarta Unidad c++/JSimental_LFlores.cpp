//Juan Daniel 24041241
//Luis Angel Flores 24041174
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    char palabra[100];
    char valoresCifrados[100]; 
    int longitud=0; 

    cout<<"Ingresa una palabra para cifrar: ";
    gets(palabra);
    for(int i=0;i<palabra[i];i++){
        char c=palabra[i];
        char cifrado=' ';
        switch(tolower(c)){
            case 's':cifrado='u'; 
			break;
            case 'f':cifrado='a'; 
			break;
            case 'm':cifrado='e'; 
			break;
            case 'l':cifrado='i'; 
			break;
            case 'c':cifrado='o'; 
			break;
            case 'u':cifrado='s';
			 break;
            case 'a':cifrado='f'; 
			break;
            case 'e':cifrado='m'; 
			break;
            case 'i':cifrado='l'; 
			break;
            case 'o':cifrado='c'; 
			break;
            default:cifrado=tolower(c); 
        }
        valoresCifrados[longitud]=cifrado;
        longitud++;
    }


    cout<<"Palabra cifrada:";
    for(int i=0;i<longitud;i++){
        cout<<valoresCifrados[i];
    }
    cout<<endl;

     cout<<"Palabra descifrada: ";
    for(int i=0;i<longitud;i++){
        char descifrado=valoresCifrados[i]; 
        switch(valoresCifrados[i]){
            case 'u':descifrado='s'; 
			break;
            case 'a':descifrado='f'; 
			break;
            case 'e':descifrado='m';
			 break;
            case 'i':descifrado='l'; 
			break;
            case 'o':descifrado='c';
			 break;
            case 's':descifrado='u'; 
			break;
            case 'f':descifrado='a'; 
			break;
            case 'm':descifrado='e';
			 break;
            case 'l':descifrado='i'; 
			break;
            case 'c':descifrado='o'; 
			break;
            
        }
        cout<<descifrado;
    }
    cout<<endl;

    return 0;
}