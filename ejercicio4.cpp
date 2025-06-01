#include<iostream>
using namespace std;
int numperfecto(int numero){
	int i,numeroperfecto;
	numeroperfecto = 1;
	for(i=2;i<numero;i++){
		if(numero % i == 0){
			numeroperfecto=numeroperfecto+i;
		}
	}
	return numeroperfecto;
}
int main(){
	int sumadivisores,numero;
	cout<<"Introduza un numero: ";
	cin>>numero;
	sumadivisores=numperfecto(numero);
	if(numero == sumadivisores){
		cout<<"El numero es perfecto";
	}
	else{
		cout<<"El numero no es perfecto";
	}
}
