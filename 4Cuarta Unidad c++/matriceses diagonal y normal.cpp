	//Juan Daniel Simental mendoza 24041241

#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10],diags[2][10];//declara una matriz cuadrada
	int i,j,n;
	srand(time(0)); // Inicializa la semilla de numeros aleatorios
	
	//Inicializador
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)//Ciclo para renglones
	{
		for(j=0;j<n;j++){ //Ciclo para columnas
			matriz[i][j]=rand()%100; //Genera número aleatorio entre 0 y 99
		}
		
	}
	cout<<"\n";
	
	//Matriz
	cout<<"Impresión de la matriz\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%3d",matriz[i][j]);
		}
		cout<<"\n";
	}
	
cout<<"Impresión de la matriz normal\n";
	for(i=0;i<n;i++)
	{
	    diags[0][i]=matriz[i][i];
		printf("%3d",diags[i][j]);
	
	}	
	cout<<"\n";
	
	//Resultados en diagonal de la matriz
	cout<<"Impresión de la diagonal\n";
	j=0;
		for(i=n-1;i>=0;i--){
			diags[1][i]=matriz[i][i];
			printf("%3d",diags[i][j]);
			j++;
		}
		

	
		
	return 0;
}