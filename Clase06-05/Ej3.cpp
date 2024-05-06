#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	
	string nombres[5];
	
	int cantidad = 5;
	for(int i=0;i<cantidad;i++){
		
		cout<<"Ingrese un Nombre :";
		cin>>nombres[i];
	}
	for(int i=0; i<cantidad;i++){
		
	//	cout<<"Lista de nombres ingresados :";
		
		cout<< nombres[i]<<endl;
	}
	
	
	
	return 0;
}
