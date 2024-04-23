#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() { 
    
	int numero = 0;
	int cont = 1;
	int factorial = 1;
	
	cout <<"Ingresar un numero :"<<endl;
	cin >> numero;
	
	if(numero > 0){
		while(cont < numero){
			cout <<"el valor del contador es :"<<cont<<endl;
			cont = cont +1;
			factorial = factorial * cont;
		}
		cout <<"El factorial es :"<<factorial<<endl;
	}
    return 0;
}
