#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Realizar un programa que ingrese 5 números. 
	El número 1 debe restarse con el número 5.
	El número 2 debe sumarse al número 3 y el número 4.
	Como resultado final, mostrar la multiplicación de ambos números */
	int numu;
	int numd;
	int numt;
	int numcu;
	int numci;
	cout << "Ingrese el Primer numero: ";
	cin >> numu;
		cout << "Ingrese el Segundo número: ";
	cin >> numd;
	cout << "Ingrese el Tercer número: ";
	cin >> numt;
	cout << "Ingrese el Cuarto número: ";
	cin >> numcu;
	cout << "Ingrese el Quinto número: ";
	cin >> numci;
	int result1;
		result1 = numu - numci;
	int result2;
		result2 = numd + numt + numcu;
		int result3;
		result3 = result1 * result2;
		cout << "El resultado de la resta de " << numu << " y " << numci <<  " multplicado por  " << "la suma de " << numd << ", " << numt << ", " << numcu << " es: " << result3;
	
	return 0;
}

