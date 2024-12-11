//juan daniel simental mendoza 24041241
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main(){
	
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

int matriz[10][10];
int i,j,n;
srand(time(0));
do{
	cout<<"Dime cuantos elementos por lado la matriz? <2-10>";
	cin>>n;
}while(n>10 or n<2);
for(i=0;i<n;j++){//ciclo para renglones
	for(j=0;i<n;j++){//ciclo para columnas 
	 matriz[i][j]=rand()%100;//genera numero aleateoria
	}
}
cout<<"Impresion de la matriz\n";
for(i=0;i<n;j++){
	for(j=0;i<n;j++){
		printf("%3d",matriz[i][j]);
	cout<<"\n";
	}
}
cout<<"Impresion en diagonal";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
				printf("%3d",matriz[i][j]);
			else
			  printf("   ");
			
		}
		cout<<"\n";
	}


return 0;
}