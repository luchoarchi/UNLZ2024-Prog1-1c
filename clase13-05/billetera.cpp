#include <iostream> 
#include <string>
#include<cmath>
/* Tenemmos una billetera que tiene 10 billetes , pedirle al usuario
que ingrese el valor nominal de cada uno de esos billetes , al finalizar 
contar cuanto dinero tiene el usuario
*/


using namespace std;
int main (){
		
	const int cantidadBilletes = 10;
	int billetera [cantidadBilletes];
	
	/* Le pedimos al usuario que llene la billetera
	(Ciclo de ingreso de datos al array*/
	
	for (int i=0;i<cantidadBilletes;i++){
		
		cout <<"Ingrese el valor nominal del billete "<<i+1<<":";
		cin>>billetera[i];
		
	
			
	}
	
	/*Ciclo de proceso*/
	int acumulador = 0;
	
	
	for(int i=0;i<cantidadBilletes;i++){
		
		acumulador = acumulador+billetera[i];
	}
	/*Mostrar Resultados*/
	
	cout<<" Billetes Ingresados :" <<endl;
	
	cout<< " Tenes " <<acumulador<< " pesos " <<endl;
	for(int i=0;i<cantidadBilletes;i++){
		cout<<billetera[i]<<endl;
	}
	return 0;
}
