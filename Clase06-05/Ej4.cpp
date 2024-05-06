// Pedir por pantalla 5 valores enteros y guardarlos en un array
//mostrar por pantalla la posicion que corresponde a los numeros impares
//mistrar por pantalla los numeros que sean divisibles por 3

#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	
	int numeros[5];
	int contador = 0;
	
	int cantidad = 5;
	for(int i=0;i<cantidad;i++){
		
		cout<<"Ingrese un valor :";
		cin>>numeros[i];
	}
	for(int i=0; i<cantidad;i++){
		if(numeros[i]%2!=0){
			contador = contador + 1;
			cout<<" Valores impares : " << numeros[i] << endl;
			
		}
		
	for( int i=0; i<cantidad;i++){
		if(numeros[i]%3==0){
			
			cout<<" Valores divisibles por 3 :  "<< numeros[i] << endl;
		}
		
		
	}
	cout<<" cantidad de numeros impares : "<<contador<<endl;
		
	}
	
	
	
	return 0;
}
