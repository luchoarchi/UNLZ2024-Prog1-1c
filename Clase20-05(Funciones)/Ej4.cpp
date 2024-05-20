#include <iostream> 
#include <string>
#include<cmath>


using namespace std;

int main(){
	
	int valores = 10;
	int vector[valores]={};
	int auxiliar = 0;
	
	for(int i=0 ;i<valores;i++){
		
	cout <<" Ingrese un valor : " ;
	cin >>vector[i];
			
	}
	
	for (int i= 0;i<valores;i++){
		
		cout << "Valor i " <<  i << " ; vector[i] = " << vector[i]<<endl;
	
		for(int j=0; j<valores;j++){
			if(vector[i]<vector[j]){
				
				auxiliar=vector[i];
				vector[i]=vector[j];
				vector[j]=auxiliar;
			}
		}
			
	}
	
	cout<<"-------------------------------------------------"<<endl;
	
	for(int i=0;i<valores;i++){
		
		cout << "Valor i " <<  i << " ; vector[i] = " << vector[i]<<endl;
	}
	
	
	
	return 0;
}
