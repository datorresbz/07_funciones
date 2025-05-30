#include <iostream>
using namespace std;

void divisionConRestas(int num1, int num2) {
    int mayor, menor;
    
    if(num1 > num2) {
        mayor = num1;
        menor = num2;
    } else {
        mayor = num2;
        menor = num1;
    }
    
    if(menor == 0) {
        cout << "Error: No se puede dividir por cero" << endl;
        return;
    }
    
    int cociente = 0;
    int resto = mayor;
    
    while(resto >= menor) {
        resto = resto - menor;
        cociente=cociente+1;          
	}
    cout << "Resultado final:" << endl;
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
}

int main() {
    int a, b;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    
    divisionConRestas(a, b);
    
    return 0;
}
