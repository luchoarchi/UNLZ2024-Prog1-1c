#include <iostream> 
#include <string>
#include<cmath>

using namespace std;

int main(){
	
	string nombres = "Luis";
	
	for(int i = 0; i<nombres.length() ; i++){
		
		cout << nombres[i] << endl;
		
		if(nombres[i] == 'L'){
			cout<<"Esto es una L" << endl;
		}
	}
	
	
	
	return 0;
}
