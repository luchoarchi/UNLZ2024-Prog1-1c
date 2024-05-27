#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

const int filas = 10;
const int columnas = 10;

int matriz[filas][columnas];

int main(){
	
	for(int j=0; j<filas;j++){
		for(int i=0; i<columnas;i++){
			if (i==j){
				matriz[i][j]= 1;
				
				
			}else {
				matriz[i][j]= 0;
			}
			
		}
	}
	
	for(int i=0; i<filas;i++){
		for(int j=0; j<columnas;j++){
			
			cout<<matriz[i][j] << "  " ;
		}
		
		cout<< endl;
	}
	
	return 0;
} 
