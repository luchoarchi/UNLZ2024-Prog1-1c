#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main() {

	int n1=0;
	int n2=0;
	int n3=0;
	 
	cout <<"Ingrese un numero : "<< endl;
	cin >> n1;
	cout <<"Ingrese un numero :"<< endl;
	cin >> n2;
	cout <<"ingrese un numero :"<< endl;
	cin>> n3;
	
	
	if(n1>n2 and n1>n3){
		cout<< "El mayor de los tres numeros es : " << n1 << endl;
	}
	else if(n2>n1 and n2>n3){
		cout<< "El mayor de los tres numeros es :" << n2 << endl;
	 }else {
		cout<< "El mayor de los tres numeros es :" << n3 << endl;
	}
    return 0;
} 