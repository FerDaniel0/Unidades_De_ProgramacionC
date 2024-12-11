#include<iostream>  // Librería para manejo de entrada y salida estándar
#include<windows.h> // Librería para funciones del sistema operativo Windows
#include<conio.h>   // Librería para funciones de consola (getch, kbhit, etc.)
using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    char palabra[50],palabraCifrada[50],palabraDescifrada[50]; // Arreglos para almacenar la palabra original, cifrada y descifrada
    int opcion,longitud; // Variables para la opción del menú y la longitud de la palabra

    do{
        // Menú de opciones
        cout<<"1.Cifrar una palabra\n";
        cout<<"2.Descifrar una palabra\n";
        cout<<"3.Salir\n";
        cout<<"Elige una opcion:";
        cin>>opcion;

        if(opcion==1){ // Opción para cifrar una palabra
            cout<<"Introduce la palabra a cifrar:";
            cin>>palabra;

            // Calcular la longitud de la palabra ingresada
            longitud=0;
            while(palabra[longitud]!='\0')longitud++;

            // Cifrado de la palabra letra por letra
            for(int i=0;i<longitud;i++){
                if(palabra[i] == ' '){ // Si es un espacio, reemplazarlo por '_'
                    palabraCifrada[i] = '_';
                }
                else{
                    switch(palabra[i]){
                        case'a':palabraCifrada[i]='m';break;
                        case'b':palabraCifrada[i]='n';break;
                        case'c':palabraCifrada[i]='o';break;
                        case'd':palabraCifrada[i]='p';break;
                        case'e':palabraCifrada[i]='q';break;
                        case'f':palabraCifrada[i]='r';break;
                        case'g':palabraCifrada[i]='s';break;
                        case'h':palabraCifrada[i]='t';break;
                        case'i':palabraCifrada[i]='u';break;
                        case'j':palabraCifrada[i]='v';break;
                        case'k':palabraCifrada[i]='w';break;
                        case'l':palabraCifrada[i]='x';break;
                        case'm':palabraCifrada[i]='y';break;
                        case'n':palabraCifrada[i]='z';break;
                        case'o':palabraCifrada[i]='a';break;
                        case'p':palabraCifrada[i]='b';break;
                        case'q':palabraCifrada[i]='c';break;
                        case'r':palabraCifrada[i]='d';break;
                        case's':palabraCifrada[i]='e';break;
                        case't':palabraCifrada[i]='f';break;
                        case'u':palabraCifrada[i]='g';break;
                        case'v':palabraCifrada[i]='h';break;
                        case'w':palabraCifrada[i]='i';break;
                        case'x':palabraCifrada[i]='j';break;
                        case'y':palabraCifrada[i]='k';break;
                        case'z':palabraCifrada[i]='l';break;
                        default:palabraCifrada[i]=palabra[i]; // Dejar sin cambios caracteres no alfabéticos
                    }
                }
            }
            palabraCifrada[longitud]='\0'; // Agregar el terminador de cadena
            cout<<"Palabra cifrada:"<<palabraCifrada<<endl;
        }

        if(opcion==2){ // Opción para descifrar una palabra
            cout<<"Introduce la palabra a descifrar:";
            cin>>palabraCifrada;

            // Calcular la longitud de la palabra cifrada
            longitud=0;
            while(palabraCifrada[longitud]!='\0')longitud++;

            // Descifrado de la palabra letra por letra
            for(int i=0;i<longitud;i++){
                if(palabraCifrada[i] == '_'){ // Si es un guion bajo, reemplazarlo por un espacio
                    palabraDescifrada[i] = ' ';
                }
                else{
                    switch(palabraCifrada[i]){
                        case'm':palabraDescifrada[i]='a';break;
                        case'n':palabraDescifrada[i]='b';break;
                        case'o':palabraDescifrada[i]='c';break;
                        case'p':palabraDescifrada[i]='d';break;
                        case'q':palabraDescifrada[i]='e';break;
                        case'r':palabraDescifrada[i]='f';break;
                        case's':palabraDescifrada[i]='g';break;
                        case't':palabraDescifrada[i]='h';break;
                        case'u':palabraDescifrada[i]='i';break;
                        case'v':palabraDescifrada[i]='j';break;
                        case'w':palabraDescifrada[i]='k';break;
                        case'x':palabraDescifrada[i]='l';break;
                        case'y':palabraDescifrada[i]='m';break;
                        case'z':palabraDescifrada[i]='n';break;
                        case'a':palabraDescifrada[i]='o';break;
                        case'b':palabraDescifrada[i]='p';break;
                        case'c':palabraDescifrada[i]='q';break;
                        case'd':palabraDescifrada[i]='r';break;
                        case'e':palabraDescifrada[i]='s';break;
                        case'f':palabraDescifrada[i]='t';break;
                        case'g':palabraDescifrada[i]='u';break;
                        case'h':palabraDescifrada[i]='v';break;
                        case'i':palabraDescifrada[i]='w';break;
                        case'j':palabraDescifrada[i]='x';break;
                        case'k':palabraDescifrada[i]='y';break;
                        case'l':palabraDescifrada[i]='z';break;
                        default:palabraDescifrada[i]=palabraCifrada[i]; // Dejar sin cambios caracteres no alfabéticos
                    }
                }
            }
            palabraDescifrada[longitud]='\0'; // Agregar el terminador de cadena
            cout<<"Palabra descifrada:"<<palabraDescifrada<<endl;
        }

        if(opcion!=1&&opcion!=2&&opcion!=3){ // Validación de opciones no válidas
            cout<<"Opcion no válida,intenta de nuevo.\n";
        }
    }while(opcion!=3); // Repetir hasta que el usuario decida salir

    cout<<"Saliendo del programa...\n";
    return 0;
}
