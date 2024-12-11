//Juan Daniel Simental mendoza 24041241
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int x,factororial;
	cout<<"Dame un numero";
	cin>>factororial;
	cout<<factororial;
	for (x=factororial-1;x>=1;x--){
		cout<<"X"<<x;
		factororial=factororial*x;
	}
	cout<<"="<<factororial;
	return 0;
}