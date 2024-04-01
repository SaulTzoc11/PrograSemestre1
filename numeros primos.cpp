#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	int numero; 
	int contador=1, divisores=0;
	cout << "Hola ingeniero, lo quiero mucho, aquí está mi programa :)" << endl;
	Sleep(2000);
	cout << "Ingrese un número para saber si es primo o no: ";
	cin >> numero; 

	while (contador <= numero) {
		if (numero%contador == 0 ) {
			divisores++;

		}
		contador++;

	}
	 if (divisores <=2) {
		 cout << numero << " es primo";
		 
	 }
	 else {
		 cout << numero << " no es primo";
	 }
	return 0;
}

