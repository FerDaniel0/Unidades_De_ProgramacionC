//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x=0,semi2=1;
	float total;
	
	for(x+semi2;semi2>=1;semi2++){
		total=x+semi2;
		cout<<"Este es tu numero: "<<total<<"\n";
			puts("Quieres continuar preciona espacio\n");
			system("pause");
		if(total+total){
				puts("Este es tu numero siguiente");
				total+total;
			}
		else{
			if(total+semi2){
			total++;	
			total+semi2;
			puts("Tu número es ");
		    }
			
		}
		
	}
	
	return 0;
}