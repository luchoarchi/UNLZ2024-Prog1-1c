#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() { 
       
       
    int opcion = 1;
    int contW = 0;
    int acumulador = 0;
    
    while (opcion !=0){
    	cout <<"Ingrese una opcion el ciclo se detendra al ingresar 00"<< endl;
    	cin >> opcion;
    	contW ++;
    	acumulador = acumulador + contW;
    	cout <<"Cantidad de veces que se repite el ciclo : "<< endl;
    	cout << contW << endl;
    	
	}
	
	cout<< "Acumulado total : " <<acumulador;
	
    
    return 0;
   
    
    	
		
} 
