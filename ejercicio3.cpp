#include<iostream>
using namespace std;
void SumaFibonacci(int n);
int main(){
	int n;
	cout << "Ingrese el numero de terminos de Fibonacci a calcular: ";
	cin>>n;
	cout<<endl<<"Suma Finobacci"<<endl;
	SumaFibonacci(n);
}
void SumaFibonacci(int n){
	int i,numero1,numero2,fibonacci;
	numero1=0;
	numero2=1;
	if(n>0){
		for(i=1;i<=n;i++){
			fibonacci=numero1+numero2;
			cout<<numero1<<"+"<<numero2<<"="<<fibonacci<<endl;
			numero1=numero2;
			numero2=fibonacci;
		}
	}
	else{
		if(n==0){
			cout<<"Es igual a 0";
		}
		else{
			cout<<"Error: El numero tiene que ser positivo";
		}
	}
}
