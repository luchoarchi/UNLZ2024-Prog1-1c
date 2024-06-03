#include <iostream> 
#include <string>
#include<cmath>
using namespace std;

int main(){
	
	int vector[5];
	int aux = 0;
	
	for(int i=0;i<5;i++){
		
		cout<<" ingrese valores :";
		cin>>vector[i];
		
	}
	
	for(int i=0; i<5;i++){
		
		for(int j=0; j<5;j++){
			
			if(vector[i]>vector[j]){
				aux = vector[i];
				vector[i]= vector[j];
				vector[j]= aux;
			}
		}
	}
	
	cout<<" Los valores quedan de esta manera: " <<endl;
	cout<<"------------------------------------" <<endl;
	for (int i=0; i<5;i++){
		
		cout<<vector[i]<<endl;
	}
	
	return 0;
}

