/* En un array de 5 elementos , pedirle al usuario que los cargue
cuando el usuario finalice la carga indicar cual es el mayor numero ingresado
y en la posicion en la que se ingreso*/

#include <iostream> 
#include <string>
#include<cmath>
using namespace std;
int main(){
	
	int mayor = elementos[0];
	int posicion = 0;
	
	
	for(int i=0; i<5;i++){
		
		cout<<" Ingrese los numeros :" ;
		cin>>caja[i];
		
		
	}
	for (int i=0; i<5;i++){
		
		if (elementos[i]>mayor){
			
			mayor= elementos[i];
			posicion = i;
		}
		cout<<" el numero mayor es " << mayor << "y se encuentra en la " <<posicion<< endl ;
	}

	return 0;
}
