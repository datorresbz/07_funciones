#include<iostream>
using namespace std;
int sumaamigo(int n){
	int i,suma;
	suma = 0;
	for(i=1;i<=n/2;i++){
		if(n % i == 0){
			suma = suma + i;
		}
	}
	return suma;
}
int main(){
	int a,b,sumaA,sumaB;
	cout<<"Introzca el primer numero: ";
	cin>>a;	
	cout<<"Introzca el segundo numero: ";
	cin>>b;
	if(a>=0 && b>=0){
		sumaA=sumaamigo(a);
		sumaB=sumaamigo(b);
		if(sumaA == b && sumaB == a){
			cout<<a<<" y "<< b << " son numeros amigos"	;
		}
		else{
			cout<<a<<" y "<< b << " no son numeros amigos"	;
		}
	}
	else{
		cout<<"ERROR: INTRODUCA NUMEROS POSITIVOS";
	}
}
		
	
	
	

