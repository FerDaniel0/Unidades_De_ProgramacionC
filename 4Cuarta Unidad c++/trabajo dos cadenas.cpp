	//Juan Daniel Simental mendoza 24041241
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <cstring>  // Para usar strcmp

using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char c1[100], c2[100]; // Aseguramos que las cadenas puedan almacenar los caracteres que el usuario ingrese.
    int i = 0;

    puts("Captura de una cadena");
    for (i = 0; i < 4; i++) {
        printf("Dame el elemento No. %d\n", i + 1);
        fflush(stdin);
        c1[i] = getchar();
        if (c1[i] == '\n') break;  // Detenemos la captura cuando el usuario presiona Enter.
    }
    c1[i] = '\0';  // Terminamos la cadena con un carácter nulo para que sea una cadena válida en C.

    puts("Captura de la segunda cadena");
    for (i = 0; i < 4; i++) {
        printf("Dame el elemento No. %d\n", i + 1);
        fflush(stdin);
        c2[i] = getchar();
        if (c2[i] == '\n') break;  // Detenemos la captura cuando el usuario presiona Enter.
    }
    c2[i] = '\0';  // Terminamos la cadena con un carácter nulo.

    // Comparamos las dos cadenas con strcmp.
    if (strcmp(c1,c2) == 0){
        puts("Las cadenas son iguales.");
    } else {
    	for(c1<c2){
        puts("Las cadenas son diferentes.");
      }
    }

    return 0;
}
