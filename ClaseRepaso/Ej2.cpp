#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

/*
Ordenar un array
Solicitar al usuario la carga de un array
ordenarlo de forma ascendente
mostrar por pantalla el array ordenado
*/

int main(){
	
	int vector[5];
	int aux = 0;
	
	for(int i=0;i<5;i++){
		
		cout<<" Ingrese un numero :";
		cin>>vector[i];
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			
			if(vector[i]<vector[j]){
				
				aux = vector[i];
				vector[i]= vector[j];
				vector[j]= aux;
			}
		}
	}
	
	cout<<"------------------------------------------"<<endl;
	
	for(int i=0;i<5;i++){
		
		cout<<vector[i]<<endl;
	}
	
	
	
	return 0;
}
