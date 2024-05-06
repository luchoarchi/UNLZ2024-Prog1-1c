#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	/*
	int vector [5];
	cout <<"Ingrese valor a la primer posicion "<<endl;
	cin>>vector [0];
	cout <<"Ingrese valor a la segunda posicion "<<endl;
	cin>>vector [1];
	cout <<"Ingrese valor a la tercer posicion "<<endl;
	cin>>vector [2];
	cout <<"Ingrese valor a la cuarta posicion "<<endl;
	cin>>vector [3];
	cout <<"Ingrese valor a la quinta posicion "<<endl;
	cin>>vector [4];
	
	cout<<"Valor de la primer  posicion"<<vector[0]<<endl;
	cout<<"Valor de la segunda posicion"<<vector[1]<<endl;
	cout<<"Valor de la tercer  posicion"<<vector[2]<<endl;
	cout<<"Valor de la cuarta  posicion"<<vector[3]<<endl;
	cout<<"Valor de la quinta  posicion"<<vector[4]<<endl;
	*/
	int segundoVector[4];
	int cantidadDePosiciones = 4;
	for(int i=0; i<cantidadDePosiciones;i++){
		
		cout<<"Ingrese un valor para la posicion ";
		cin>> segundoVector[i];
		
	}
	for(int i=0; i<cantidadDePosiciones;i++){
		
		cout<<"Valor de la posicion :"<<i<<":"<<segundoVector[i]<<endl;
	}
	return 0;
}
