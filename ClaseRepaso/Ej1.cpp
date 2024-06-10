#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

/*
Busqueda de un numero en un array 

La definicion de un array que contenga enteros

que se le solicite al usuario buscar uno de los valores ingresados

Informar si el valor fue encontrado, y en caso de ser asi indicar su ubicacion


*/
int main(){
	
	int vector[5];
	bool fueEncontrado=0;
	int numero = 0;
	
	for(int i=0;i<5;i++){
		
		cout<<"Ingrese sus numeros :";
		cin>>vector[i];
	}
	
	cout<<" Ingrese el numero que quiere buscar :";
	cin>>numero;
	
	
	
	for(int i=0;i<5;i++){
		if(vector[i]==numero){
			cout<<" El numero "<<numero<<" esta y se encuentra en la posicion "<<i<<endl;
			fueEncontrado=true;
		
		}
		
			
		}
		if(fueEncontrado==false){
			
			cout <<" el valor " << numero << " no esta en el vector ";
		
		}
		return 0;
		}
		
			
		
		
		
		
		
	
	
	
	

