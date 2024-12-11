//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
#include <time.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nume,nume2;
	int x=1;
	srand(time(0));
	nume=rand()%101;

	for(x<1000;x++;x--){
		cout<<"Adivina el número entre (0 a 100): ";
		cin>>nume2;
		if(nume==nume2){
		   cout<<"Correcto es: "<<nume;	
			break;	
		}
		else{
		if(nume<=nume2){
			puts("Muy alto");
		}
		else{
		   puts("Muy bajo");
		}
     }
	}
	
	return 0;
}