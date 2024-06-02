#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

int numero = 0;

int conjeturaDeCollatz(){
	
	bool esPar = (numero % 2 == 0);
	bool esImpar = (numero % 2 !=0);
	
	if(esPar){
		numero = numero/2;
		cout<<"----------------------"<<endl;
		cout<< "Resultado : "<<numero;
	}else
	if(esImpar){
		numero = (3*numero)+1;
		cout<<"----------------------"<<endl;
		cout<< "Resultado : "<<numero;
		
	}
	return(numero);
}

int main(){
	
	cout<< " Ingrese un numero : " ;
	cin>>numero;
	
	if(numero!=1 and numero>0){
		
		conjeturaDeCollatz();
	}
	return 0;
}