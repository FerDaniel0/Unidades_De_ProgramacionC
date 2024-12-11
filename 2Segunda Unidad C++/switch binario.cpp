//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    char c;
    int opcion;
    /*cout<<"Dime un valore binario 0/1";
    cin>>c;
    switch(c){
    	case '0':
    		cout<<"Falso o apagado\n";
    		break;
    		case '1':
    		cout<<"Cierto o encendido";
    		break;
    		default:
    		cout<<"Tecleaste un valor incorrecto";
    }*/
    system("pause");
    system("cls");
    printf("1.-Quimica\n");
    printf("2.-Matematicas\n");
    printf("3.-Recreo\n");
    printf("4.-Fisica\n");
    printf("Selecciona una opcion: ");
    cin>>opcion;
    
    switch(opcion){
    	case 1:
		printf("Seleccionaste quimica");
    	break;
    	case 2:
		printf("Seleccionaste Matematicas");
    	break;
    	case 3:
		printf("Seleccionaste recreo");
    	break;
    	case 4:
		puts("Seleccionaste Fisica");
    	break;
    	default:
    		printf("Selecionaste una opción no valida");
    }
    return 0;
}

//Se otulisa para una de igualdad 