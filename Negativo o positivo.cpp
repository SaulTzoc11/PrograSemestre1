#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//CREAR UN PROGRAMA QUE RESTE DOS NUMEROS Y MUESTRE SI EL RESULTADO ES POSITIVO O NEGATIVO
	int numero1;
	int numero2;
		cout << "Ingrese el primer número: ";
		cin >> numero1;
			cout << "Ingrese el segundo número: ";
		cin >> numero2;
	int resultado;
		resultado = numero1 - numero2;
		if (resultado < 0) {
			cout << resultado << " es negativo";
		}
		else {
			
			cout << resultado << " es postivo";
		}
	return 0;
}

