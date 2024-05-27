#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

const int filas =4;
const int columnas = 6;

int vector[filas][columnas];

int main(){
	for (int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			cout<<"Ingrese valores : ";
			cin>>vector[i][j];
		}
		
	}
	
	for (int i=0; i<filas;i++){
		cout<< i << " " << " | ";
		for(int j=0; j<columnas;j++){
			cout<<vector[i][j]  <<  " " ;
		}
		cout<< endl;
	}
	
	
	return 0;
}
