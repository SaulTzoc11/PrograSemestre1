#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int years, edad;
	cout << "Ingrese los años de servicio de la persona; " << endl;
	cin >> years;
	cout << "Ingrese la edad de la persona: " << endl;
	cin >> edad;
	if (years >= 25 && edad >= 65){
		cout << "La persona ya se puede jubilar";
	} else {
		cout << "Aún no puede jubilarse";
	}
	int inscripcion,  beca;
	cout << "Ingrese el metodo de inscripcion: " << endl;
	cout << "1. DPI"<<endl;
	cout << "2. Pasaporte" << endl;
	cin >> inscripcion;
	cout << "Posee una beca?"<< endl;
	cout << "1. Si" << endl;
	cout << "0. No" << endl;
	cin << beca;
	if (
	return 0;
}

