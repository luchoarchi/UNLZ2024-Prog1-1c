#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	
	float LadoA = 0;
	float LadoB = 0;
	
	
	cout <<"Ingrese Base: " << std::endl;
	cin >> LadoA;
	cout <<"Ingrese Altura:" << std::endl;
	cin >>LadoB;
	
	float Area = LadoA*LadoB;
	
	if(Area > 25){
		cout <<"El Area es mayor a 25";
	}else{
		cout <<"El Area es menor a 25";
	}
	
	
}
