#include <iostream> 
#include <string>
#include<cmath>


using namespace std;

void ordenar(int vector[], int len){
	
}

int main(){
	
	int len = 7;
	int vector[len] = {9,4,6,3,8,5,1};
	int auxiliar = 0;
	
 
	
	for( int i=0; i<len;i++){
		cout << "Valor i " <<  i << " ; vector[i] = " << vector[i]<<endl;
		for(int j=0; j<len;j++){
			cout<< "comparar con j " << j << " ; vector[j] = " << vector[j]<<endl;
			if(vector[i] < vector[j]){
				cout<<"Intercambiamos posiciones"<<endl;
				auxiliar = vector[i];
				vector[i] = vector[j];
				vector[j] = auxiliar;
			}
		}
	}
	cout<<"------------------------------------------"<<endl;
	for( int i=0; i<len;i++){
		cout <<"Valor i " <<  i << " ; vector[i] = " << vector[i]<<endl;
	}
	return 0;
}
