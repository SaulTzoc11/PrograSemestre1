#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Ingresar un número. Indicar si el mismo está en el rango de 500 a 1000
	double num;
	cout << "Ingrese un número: " << endl;
	cin >> num;
	if (num >= 500 && num <= 1000){
		cout << num << " Está dentro del rango de 500 a 1000"; 		
	} else {
		cout << num << " No está dentro del rango de 500 a 1000";
	}
	return 0;
}

