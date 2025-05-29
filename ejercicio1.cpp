#include<iostream>
using namespace std;
int suma(int n1,int n2);
void division(int n1,int n2);
int main(){
    int n1,n2,resultado;
    cin>>n1>>n2;
    resultado =suma(n1,n2);
    division(n1,n2);
    division(n2,n1);
    cout<<"La suma es igual a "<<resultado;
    return 0;
}
int suma(int n1,int n2){
    int sum;
    sum = n1+n2;
    return(sum);
}
void division(int n1,int n2){
    int div;
    if(n2==0){
    	div=0;
	}
	else{
		div=n1/n2;
	}
    cout<<"La divison entre "<<n1<<" entre "<< n2<<" es igual a: "<<div<<endl;
    
}
