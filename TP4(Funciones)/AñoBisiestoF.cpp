#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

int anio = 0;


int anioBisiesto(){
	
	
	
	bool esBisiesto = (anio % 4 == 0 or anio % 400 == 0);
	if(esBisiesto){
		cout<< " El año es bisiesto " ;
	}else{
		cout<< " El año no es bisiesto";
	}
	return(esBisiesto);
	 
}
	 
int main() {

	
	cout << " Ingrese año:  " ;
	cin>>anio;
	
	anioBisiesto();
	
    return 0;
}