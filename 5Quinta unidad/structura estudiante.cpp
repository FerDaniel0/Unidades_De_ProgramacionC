
//juan daniel simental mendoza 24041241
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

struct Estudiante{
	string nombre;
	int edad;
	int calificaciones[5];
};
Estudiante estudiantes1;

cout<<"Ingresa al nombre del estudiante: ";
getline(cin, estudiantes1.nombre);
cout<<"Ingresa la edad del estudiante: ";
cin>>estudiantes1.edad;

cout<<"Ingresa al nombre del estudiante: ";
for(int i=0;i<5;i++){
	cout<<"Calificación de la unidad "<<i+1<<": ";
    cin>>estudiantes1.calificaciones[i];
}
cout<<"\nInformación del estudiante:\n";
cout<<"Nombre: "<<estudiantes1.nombre<<"\n";
cout<<"Edad: "<<estudiantes1.edad<<"\n";
cout<<"Calificaciónes: ";
for(int i=0;i<5;i++){
	cout<<estudiantes1.calificaciones[i]<<" ";
}
cout<<"\n";
return 0;
}