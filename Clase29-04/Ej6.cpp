#include <iostream> 
#include <string>
#include<cmath>

using namespace std;
// Ingresar un numero del 1 al 9, mostar cada uno de los renglones de su tabla de multiplicar
int main(){
	
	int numero = 0;
	int contador = 0;
	
	cout<<"Ingrese un numero :" ;
	cin>>numero;
	
	while (contador<=10){
		
		cout<<"Numero:"<< numero <<"*"<< contador << "=" << numero*contador << endl;
		contador = contador +1;
		
		
		
		//cout<<numero*contador ;
		
		
		
	}
	
	return 0;
}
