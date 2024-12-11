	//Juan Daniel Simental mendoza 24041241
#include <windows.h>
#include <iostream>
using namespace std;
int main(){

SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int vector[10];
int i;
for(i=0;i<10;i++){
    vector[i]=i*2;
}
for(i=0;i<10;i++){//se pasa el limite
    cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
}
vector[0]=100;	   
vector[1]=200;
vector[2]=300;
cout<<vector[0]<<endl;
cout<<vector[1]<<"\n";
cout<<vector[2]<<endl;

return 0;
}
