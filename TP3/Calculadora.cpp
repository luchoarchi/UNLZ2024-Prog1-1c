#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	int valor = 0;
	int valor1 =0;
	int opcion = 0;
	int resultado = 0;
		
	cout <<"ingrese un numero :" << endl;
	cin >> valor;
	cout <<"ingrese un numero :"<< endl;
	cin >> valor1;
	
	cout <<"1. Sumar" << endl;
	cout <<"2. Restar" << endl;
	cout <<"3. Multiplicar" << endl;
	cout <<"4. Dividir" << endl;
	cin >> opcion;
	
	switch(opcion){
		case 1:
			resultado = valor+valor;
			break;
		case 2:
			resultado = valor - valor;
			break;
		case 3:
			resultado = valor*valor;
			break;
		case 4:
			resultado = valor/valor;
			break;
		
	}
	cout <<" El resultado es :" << resultado;
	return 0;
}