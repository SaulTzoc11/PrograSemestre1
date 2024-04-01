#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Salario;
	cout << "Ingrese su salario:";
	cin >> Salario;
		if (Salario < 2800) {
			cout << "Su salario es menor";
	}
		if (Salario > 2800) {
			cout << "Su salario es mayor";
		}
		if (Salario == 2800) {
			cout << "Su salario es de 2800";
			
		}
	return 0;
}

