#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() { 

	int valor = 5;
	cout <<"Ingrese un numero "<< endl;
	cin >> valor;
	
	bool valorpositivo = (valor > 0);
	if(valorpositivo){
		cout<< "El numero ingresado es positivo";
	}
	else if(valor==0){
		cout<< "El numero es 0";
	 }else {
		cout<< "El numero es negativo";
	}
    return 0;
} 
