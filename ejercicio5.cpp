#include<iostream>
using namespace std;
int sumaamigoA(int a){
	int i,suma;
	suma = 0;
	for(i=1;i<=a/2;i++){
		if(a % i == 0){
			suma = suma + i;
		}
	}
	return suma;
}
int sumaamigoB(int b){
	int i,suma;
	suma = 0;
	for(i=1;i<=b/2;i++){
		if(b % i == 0){
			suma = suma + i;
		}
	}
	return suma;
}
int main(){
	int a,b,sumaA,sumaB;
	cin>>a>>b;
	sumaA=sumaamigoA(a);
	sumaB=sumaamigoB(b)	;
	if(sumaA == b && sumaB == a){
		cout<<a<<" y "<< b << " son numeros amigos"	;
	}
	else{
		cout<<a<<" y "<< b << " no son numeros amigos"	;
	}
}
		
	
	
	

