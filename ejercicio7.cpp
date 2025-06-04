#include <iostream>
using namespace std;
int veriprimo (int N);
int main (){
	int n,v;
	cout<<"VERIFICADOR DE NUMEROS PRIMOS"<<endl<<endl;
	cout<<"Escriba un numero: ";
	cin>>n;
	cout<<endl;
	v=veriprimo(n);
	if (v==1)
		cout<<"El numero " <<n<<": ES PRIMO";
	else
		cout<<"El numero " <<n<<": NO ES PRIMO";
	return 0;
}

int veriprimo(int N) {
	int c, i, V;
	c=0;
	for (i=1;i<=N;i++) {
		if (N%i==0)
			c=c+1;
	}
	if (c==2)
		V=1;
	return V;
}
