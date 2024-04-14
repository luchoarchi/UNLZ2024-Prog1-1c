#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	int numero = 0;
	
		
	cout <<"ingrese un numero del 1 al 7 :" << endl;
	cin >> numero;
	
	
	
	switch(numero){
		case 1:
			numero = 1;
			cout <<"Lunes";
			break;
		case 2:
			numero = 2;
			cout <<"Martes";
			break;
		case 3:
			numero = 3;
			cout <<"Miercoles";
			break;
		case 4:
			numero = 4;
			cout <<"Jueves";
			break;
		case 5:
			numero = 5;
			cout<<"Viernes";
			break;
		case 6:
			numero = 6;
			cout<<"Sabado";
			break;
		case 7:
			numero = 7;
			cout<<"Domingo";
			break;
	
	}
	
	return 0;
	
}