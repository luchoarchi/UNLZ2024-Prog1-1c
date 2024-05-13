#include <iostream> 
#include <string>
#include<cmath>
/* Se necesita calcular una proyeccion de la cotizacion del dolar
con respecto al peso argentino para los proximos 25 años

se sabe tambien que la depreciacion del 10% anual 

calcular para cada año hasta el 2049 el valor estimado de la cotizacion del dolar
*/


using namespace std;

int main(){
	
	int const anioActual =2024;
	int const cantidadPeriodosAProyectar=25;
	int proyeccionesDolar[cantidadPeriodosAProyectar]; 
	/*Carga de Datos*/
	proyeccionesDolar[0]=860;
	proyeccionesDolar[1]=2045;
	
	/*Procesamiento*/
	 
	for(int i=2 ; i<cantidadPeriodosAProyectar;i++){
		
		proyeccionesDolar[i]= proyeccionesDolar[i-1] * 1.10;
	}
	
	/*Mostrar Resultados*/
	
	for(int i=0;i<cantidadPeriodosAProyectar; i++){
		
		cout<<"Cotizacion del año "<< anioActual + i << " : " << proyeccionesDolar[i]<< endl;
	}
	return 0;
}
