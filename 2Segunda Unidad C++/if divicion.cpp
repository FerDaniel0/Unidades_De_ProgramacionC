//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	float numer,denominador;
	cout<<"Dame el numerador";
	cin>>numer;
	cout<<"Dame el denominador";
	cin>>denominador;
	
	if (denominador!=0){
		cout<<numer<<"/"<<denominador<<"="<<numer/denominador<<"\n";
	}
	else{
		cout<<"La division sobre cero no se permite\n";
		system("pause");
	}
	//preguntar por la negocipon de un valor diferentes
	if (!denominador){
		cout<<"La division sobre cero no se permite\n";
	}
	else{
		cout<<numer<<"/"<<denominador<<"="<<numer/denominador;
	
    }
    return 0;
}
	
	
	