#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Ingresar un n�mero. Indicar si el mismo est� en el rango de 500 a 1000
	double num;
	cout << "Ingrese un n�mero: " << endl;
	cin >> num;
	if (num >= 500 && num <= 1000){
		cout << num << " Est� dentro del rango de 500 a 1000"; 		
	} else {
		cout << num << " No est� dentro del rango de 500 a 1000";
	}
	return 0;
}

