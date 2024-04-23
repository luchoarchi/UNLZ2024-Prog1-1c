#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() { 
    
	int numero = 0;
	int acum = 0;
	
	
	do { 
		cout << "Ingrese un numero :"<<endl;
	    cin>>numero;
	    if(numero>0){
	    	acum = acum + numero;	
		}
		
		cout <<"El numero acumulado es :"<< acum << endl;
	}
	while (numero >= 0 );  
	
    return 0;
}
