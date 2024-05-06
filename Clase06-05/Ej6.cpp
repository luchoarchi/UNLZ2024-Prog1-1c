#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

// identificar que palabra contiene B Y b

int main(){
	
	string nombres[5];
	
	int cantidad = 5;
	for(int i=0;i<cantidad;i++){
		
		cout<<"Ingrese un Nombre :";
		cin>>nombres[i];
	}
	for(int i=0; i<cantidad;i++){
		cout<<nombres[i];
		for(int j=0;j<nombres[i].length();j++){
			
			cout<< nombres[i] [j] <<endl;
			if(nombres[i][j]== 'b' || nombres[i][j]=='B'){
				cout<<"Tiene B"<<endl;
				break;
			}
		}
	}
	}

