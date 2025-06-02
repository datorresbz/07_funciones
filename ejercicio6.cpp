#include<iostream>
#include<cstdlib>
using namespace std;

int mcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    if (a == 0 && b == 0) {
        return 0;
    }
    while (b != 0) {
        int aux = b;
        b = a % b;
        a = aux;
    }
    return a;
}

int mcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    return abs((a / mcd(a, b)) * b);
}

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    
    cout << "El MCM de " << num1 << " y " << num2 << " es: " << mcm(num1, num2) << endl;
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1, num2);
    
    return 0;
}

