#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	int valor = 0;
	int opcion = 0;
	int resultado = 0;
		
	cout <<"ingrese un valor :" << endl;
	cin >> valor;
	
	cout <<"1. Multiplicar por si mismo" << endl;
	cout <<"2. Sumarse a si mismo" << endl;
	cin >> opcion;
	
	switch(opcion){
		case 1:
			resultado = valor*valor;
			break;
		case 2:
			resultado = valor + valor;
			break;
		default:
			cout<<"No ingresaste ninguna opcion" << endl;
			break;
	}
	cout <<" El resultado es :" << resultado;
	return 0;
	
}
