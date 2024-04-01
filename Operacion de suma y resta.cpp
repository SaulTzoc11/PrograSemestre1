#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Realizar un programa que ingrese 3 números, sume los primeros dos y reste el tercero.
	int numero1;
	int numero2;
	int numero3;
	cout << "Ingrese el primer numero para sumar: ";
	cin >> numero1;
	cout << "Ingrese el segundo numero para sumar: ";
	cin >> numero2;
	cout << "Ingrese el tercer numero para restar: ";
	cin >> numero3;
	
	int resultado;
	resultado = numero1 + numero2 - numero3;
	cout << "El resultado de la operación es:  " << resultado;
		
	return 0;
}

