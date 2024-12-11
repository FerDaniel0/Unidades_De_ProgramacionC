//juan Daniel Simental Mendoza 24041241
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream> 
#include <conio.h> 
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int a,b,c;
	cout<<"Dame el numero a";
	cin>>a;
	cout<<"Dame el numero de b";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"\nA="<<a<<"\nB="<<b;
	return 0;
	
}