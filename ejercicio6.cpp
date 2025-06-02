#include<iostream>
#include<cstdlib>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int auxiliar = b;
        b = a % b;
        a = auxiliar;
    }
    return a;
}
	
int mcm(int a, int b) {
    return abs(a * b) / mcd(a, b);
}

int main(){
	int num1,num2;
	cout<<"Ingrese el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	cout << "El MCM de " << num1 << " y " << num2 << " es: " << mcm(num1, num2) << endl;
	cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1, num2);
}

