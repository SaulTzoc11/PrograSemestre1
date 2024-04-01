#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese el primer numero: " << endl;
	cin >> num1;
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;
	if (num1 == num2) {
		cout << "Los numeros son iguales" << endl ;
	}
	if (num1 != num2) {
		cout << "Los numeros no son iguales" << endl ;
	}
	if (num1 <= num2) {
		cout << num1 << " Es menor o igual a " << num2 << endl;
	}
	if (num1 >= num2) {
		cout << num1 << " Es mayor o igual a " << num2 << endl;
	}
	if (num1 < num2) {
		cout << num1 << " Es menor a " << num2 << endl;
	}
	if (num1 > num2) {
		cout << num1 << " Es mayor a " << num2 << endl;
	}
	bool bool1 = true; 
	bool bool2 = false;
	if (bool1 == bool2) {
		cout << "Las variables bool son iguales";
		
	} else {
		cout << "Las dos variables bool son diferentes"; 
	}
	
	return 0;
}

