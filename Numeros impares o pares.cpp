#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "Ingrese un numero par o impar:";
	cin >> numero;
	if (numero % 2 == 0) {
		cout << "El numero " << numero << " ingreso es  par";
	}
	else { 
		cout << "El numero " << numero <<  " que ingreso es impar"; 
	}
	return 0;
}

