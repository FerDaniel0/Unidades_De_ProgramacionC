//Juan Daniel Simental mendoza 2404124
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x;
	int num1;
	for(x=2;x<num1;x++){
		cout<<"Dame un número mayor que 1: ";
		cin>>num1;
		if(num1%x==0){
		break;
	   }
	   if(x==0){
	   	puts("Si es primo");
	   	cin>>num1;
	   }
	   	else{
	   	puts("No es número primo");
	   }
	   
	}
	return 0;
}