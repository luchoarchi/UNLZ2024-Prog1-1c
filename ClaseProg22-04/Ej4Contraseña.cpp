#include <iostream> 
#include <string>
#include<cmath>

using namespace std;
//Desarrollar un programa que pida al usuario ingresar una contraseña, y se repita hasta que ingrese la contraseña correcta.


int main (){
	
	int numero = 1234;
	int contador = 0;
	
	cout <<" Ingrese contraseña de cuatro numeros : " ;
	cin>>numero;
	
	
		
		while(numero!=1234 ){
		
			cout<<"Contraseña incorecta" << endl;
			contador = contador + 1;
			cout << " Intento :" <<contador<< endl;
			cout<<" Ingrese contraseña de cuatro numeros :" ;
			cin>>numero;
		}

	
	
	return 0;
}