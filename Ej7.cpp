#include <iostream> 
#include <string>
#include<cmath>

using namespace std;
// contador de pares y contador de impares
// esperar por pantalla n numeros
// contar cantidad de pares ingresados
// cortar ciclo cuando se ingrese un 0
// mostrar valor de contador por pantalla

int main(){
	
	int numero = 0;
	int contadorPar = 0;
	int contadorImpar = 0;
	
	do{
		cout << "Ingrese un numero : " ;
		cin>>numero;
		if(numero!=0){
			if(numero%2==0){
			contadorPar = contadorPar + 1;
			
		}else {
			contadorImpar = contadorImpar + 1;
		}
		}
		
	}while(numero!=0);
	
	cout << "Total de numeros pares ingresados :" <<contadorPar<<endl ;
	
	cout << "Total de numeros Impares ingresados :" <<contadorImpar<<endl ;
	
	return 0;
}
