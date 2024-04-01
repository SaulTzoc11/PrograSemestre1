#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//CREAR UN PROGRAMA QUE MULTIPLIQUE DOS NUMEROS Y LOS MUESTRE EN PANTALLA
	int numero1;
	int numero2;
	cout << "Ingrese el primer numero: ";
	cin >> numero1;
		cout << "Ingrese el segundo numero: ";
		cin >> numero2;
		
	int resultado; 
	resultado = numero1 * numero2;
		cout << "El resultado de multiplicar " << numero1 << " y " << numero2 << " es: " << resultado;

	return 0;
}

