	//Juan Daniel Simental mendoza 24041241
#include<iostream>
#include<time.h>
#include<windows.h>
using namespace std;
int main( )
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int matriz[10][10];
	int i,j,n;
	srand(time(0)); 
	
	
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			matriz[i][j]=rand()%100; 
		}
		
	}
	cout<<"\n";
	

	cout<<"Impresión de la matriz\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%3d",matriz[i][j]);
		cout<<"\n";
	}
	

	cout<<"Impresión de la diagonal\n";
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("   ");
			}
			else{
				printf("%3d",matriz[i][j]);
			}
		}
		cout<<"\n";
	}
		
	return 0;
}