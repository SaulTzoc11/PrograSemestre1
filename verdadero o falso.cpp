#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	bool   opcion= true; 
	char respuesta;
	cout << "Escriba S o N para determinar si es verdadero o falso: "; 
	cin >> respuesta;
	if (respuesta == 'S') {
		opcion == true; 
		if ( opcion == true) {
			cout << "Es verdadero";
		}
		if ( opcion == false) {
			cout << "Es falso";
		}
	}
	else if (respuesta == 'N') {
		opcion == false;
		if ( opcion == true) {
			cout << "Es verdadero";
		}
		if ( opcion == false) {
			cout << "Es falso";
		}
	}
	
	else {
		cout << "La entrada no es válida";
		
	}
	return 0;
}

