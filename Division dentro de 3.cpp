#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
		cout << "Ingrese un número: ";
		cin >> numero;
		int resultado;
		resultado = numero % 3;
		if (resultado < 1) {
		cout << numero << " Es divisible dentro de 3 exactamente";
		}
		else {
			cout << numero << " No es divisible dentro de 3 exactamente";
		}
	return 0;
}

