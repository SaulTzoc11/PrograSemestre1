#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int lista [15];
	for (int i = 0; i<15; i ++){
		cout << "Ingrese un numero en la posicion " << i <<endl;
		cin >> lista[i];
	}
	for (int i = 0; i <15; i++){
		cout << "Numero ingresado en la posicion: " << i << ": "<< lista[i]<<endl;
		
	}
	return 0;
}

