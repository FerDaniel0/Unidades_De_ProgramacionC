//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x, tabla;
	cout<<"Dame el número de la tabla que quiera generar: ";
	cin>>tabla;
	for(x=1;x<11;x++)
	{
		cout<<tabla<<"X"<<x<<"="<<tabla*x<<"\n";
	}
	for(x=1;x<11;x++)
	{
		printf("%2d x %2d = %3d\n",tabla,x,tabla*x);
	}
return 0;
}