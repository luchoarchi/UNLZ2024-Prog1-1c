#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	
	int limite =15;
	int acumulador = 0;
	
	for(int i=0; i<limite;i++){
		
		 acumulador = acumulador +i;
		cout<<"Valor del contador :"<<i<<endl;
	}
	
	cout <<"Valor del acumulador "<<acumulador<<endl;
	return 0;
}
