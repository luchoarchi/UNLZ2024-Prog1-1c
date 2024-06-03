#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

float divideElMayor(int numero1,int numero2){
	float resultado;
	
	if(numero1>numero2){
		
		resultado = (float)numero1/(float)numero2;
	}else{
		resultado = (float)numero2/(float)numero1;
	}
	
	return resultado;
}

int main(){
	int numero1;
	int numero2;
	cout<<" Ingrese un numero : " ;
	cin>>numero1;
	
	cout<<" Ingrese un numero : " ;
	cin>>numero2;
	
	cout<<" el resultado es :"<<	divideElMayor(numero1, numero2);
	
	
	return 0;
}
