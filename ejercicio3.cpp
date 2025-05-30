#include<iostream>
using namespace std;
int main(){
	int n,i,numero1,numero2,fibonacci;
	cin>>n;
	numero1=0;
	numero2=1;
	cout<<"Suma Finobacci"<<endl;
	for(i=1;i<=n;i++){
		fibonacci=numero1+numero2;
		cout<<numero1<<"+"<<numero2<<"="<<fibonacci<<endl;
		numero1=numero2;
		numero2=fibonacci;
	}
}
