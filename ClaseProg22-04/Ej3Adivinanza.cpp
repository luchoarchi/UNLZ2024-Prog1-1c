#include <iostream> 
#include <string>
#include<cmath>

using namespace std;
// Implementar un juego de adivinanzas en el que el usuario tenga que adivinar un número secreto. 
//El ciclo while se repetirá hasta que el usuario adivine el número correcto

int main () {
	
	 int numero = 5;
	
	cout<<"Ingrese un numero : " ;
	cin>>numero;
	while(numero!=5){
		
		cout<<" Ingrese un numero :";
		cin>>numero;
	}		
	
	cout <<" Adivinaste !!, el numero es "<<numero ;
	
	
    
    return 0;
    
    
    

 	
 }