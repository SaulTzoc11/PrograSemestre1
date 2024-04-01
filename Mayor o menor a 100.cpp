#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//CREAR UN PROGRAMA QUE MULTIPLIQUE DOS NUMEROS Y MUESTRE SI EL RESULTADO ES MAYOR O MENOR A 100
	int numero1;
	int numero2;
		cout << "Ingrese el primer numero que desea multiplicar: ";
		cin >> numero1;
			cout << "Ingrese el segundo número que desea multiplicar: ";
		cin >> numero2;
		
		int resultado;
		resultado = numero1 * numero2;
		if (resultado < 100) {
			cout << resultado << " Es menor a 100";
		}
		else {
			cout << resultado << " Es mayor a 100";
		}
	return 0;
}

