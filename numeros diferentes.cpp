#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1, num2;
	cout << "Ingrese un n�mero: "<<endl;
	cin >> num1;
	cout << "Ingrese otro n�mero: "<<endl;
	cin >> num2; 
	if (num1 == num2) {
		cout << "Los n�meros no son diferentes";
	} else {
		cout << "Los numeros son diferentes"; 
	}
	return 0;
}

