#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	/*Realizar un programa que ingrese 5 n�meros. 
	El n�mero 1 debe restarse con el n�mero 5.
	El n�mero 2 debe sumarse al n�mero 3 y el n�mero 4.
	Como resultado final, mostrar la multiplicaci�n de ambos n�meros */
	int numu;
	int numd;
	int numt;
	int numcu;
	int numci;
	cout << "Ingrese el Primer numero: ";
	cin >> numu;
		cout << "Ingrese el Segundo n�mero: ";
	cin >> numd;
	cout << "Ingrese el Tercer n�mero: ";
	cin >> numt;
	cout << "Ingrese el Cuarto n�mero: ";
	cin >> numcu;
	cout << "Ingrese el Quinto n�mero: ";
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

