#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1, num2;
	cout << "Ingrese un número: "<<endl;
	cin >> num1;
	cout << "Ingrese otro número: "<<endl;
	cin >> num2; 
	if (num1 == num2) {
		cout << "Los números no son diferentes";
	} else {
		cout << "Los numeros son diferentes"; 
	}
	return 0;
}

