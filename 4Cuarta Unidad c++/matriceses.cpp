	//Juan Daniel Simental mendoza 24041241
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
int main(){
	
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
	
int matriz[5][5];
int i,j;
srand(time(0));

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
	  matriz[i][j]=rand()%100;
    }
}
for (i=0;i<5;i++){ 
	for(j=0;j<5;j++){
		printf("%3d",matriz[i][j]);
	}
	cout<<"\n";
 }
        
return 0;
}
