//Juan Daneil 24041241
//Luis Angel Flores 24041174
#include <iostream>
using namespace std;

int main() {
    int numero=3; 
    char c;

    do {
        bool pri = true;
        for (int i=2;i<numero; i++) {
            if (numero%i==0) {
                pri=false;
                break;
            }
        }

        if (pri){
            cout<< numero<< " es un numero primo ¿Desea generar el siguiente primo? (S/N): ";
            cin>>c;

            while (c!= 'S' &&c!='N') {
                cout<<"Respuesta invalida Por favor ingrese 'S' para continuar o 'N' para detenerse: ";
                cin>>c;
            }
        }

      
        numero++;

    } while(c=='S');

    cout<<"Programa terminado."<< endl;
    return 0;
}
