//Juan Daniel Simental mendoza 24041241
#include<windows.h>
#include<iostream>
#include <math.h>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
    long int n=3,x=2;
    do{
    	cout<<"Tu numero es : "<<n<<"De sea continuar";
	}while(n<2);
	for(x=2;x<n;x++){
		if(n%x==0)
			break;
	}
	if(x==n)
		cout<<"Sí es primo";
	else
		cout<<"No es primo";
	return 0;
}