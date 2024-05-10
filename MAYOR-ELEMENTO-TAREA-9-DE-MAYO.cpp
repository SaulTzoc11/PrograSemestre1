#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int tamanio = 5;
	int arreglo[tamanio];
	for (int i =0;i<tamanio;i++){
		cout << "Ingrese un numero para la posicion "<<i <<endl;
		cin >> arreglo[i];
	}
	int pos=arreglo[0];
	for (int i = 0;i<tamanio;i++){
		
		if (arreglo[i] > pos){
			pos=arreglo[i];
		}
	}
	cout << "El numero mayor es: "<< pos;
	return 0;
}

