#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() {

	int nac =0;
	int actual = 2024;
	
	
	 
	cout <<"Ingrese año de nacimiento : "<< endl;
	cin >> nac;
	
	
	if(actual-nac >=18){
		cout<< " La persona es mayor de edad " ;
	} else{
		
		cout << " La persona es menor de edad" ;
	}
	
    return 0;
}