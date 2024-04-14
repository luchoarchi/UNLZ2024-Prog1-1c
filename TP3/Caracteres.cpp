#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	
	
	
		
	cout <<"ingrese un caracter : " ;
	char opcion;
	cin >> opcion;
	
	
	switch(opcion){
		case 'a': cout<<"usted ingreso una vocal";
		break;
		case 'e': cout<<"usted ingreso una vocal";
		break;
		case 'i': cout<<"usted ingreso una vocal";
		break;
		case 'o': cout<<"usted ingreso una vocal";
		break;
		case 'u': cout<<"usted ingreso una vocal";
		break;
		case 'A': cout<<"usted ingreso una vocal";
		break;
		case 'E': cout<<"usted ingreso una vocal";
		break;
		case 'I': cout<<"usted ingreso una vocal";
		break;
		case 'O': cout<<"usted ingreso una vocal";
		break;
		case 'U': cout<<"usted ingreso una vocal";
		break;
		default:
			cout<<"usted ingreso una consonante" << endl;
			break;
	}
	
	return 0;
	
}