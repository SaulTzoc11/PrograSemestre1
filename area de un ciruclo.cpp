#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double pi=3.141592;
	double radio;
	double area;
	cout << "Ingrese el radio del circulo: ";
	cin >> radio; 
	area = pi * radio * radio;
	cout << "El área del circulo es: " << area;
	return 0;
}

