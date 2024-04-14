#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() {

	int valor =4;
	
	 
	cout <<"Ingrese un año : "<< endl;
	cin >> valor;
		
	bool esBisiesto = (valor % 4 == 0 or valor % 400 == 0);
	
	if(esBisiesto){
		cout<< " El año es bisiesto " ;
	} else{
		
		cout << " El año no es bisiesto" ;
	}
	
    return 0;
}