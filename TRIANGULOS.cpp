#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Bienvenido"<<endl;
	Sleep(1000);
	cout << "Ingrese la longitud del primer lado del triangunlo: "<< endl;
	double lado1;
	cin >> lado1;
	cout << "Ingrese la longitud del segundo lado del triangunlo: "<< endl;
	double lado2;
	cin >> lado2;
	cout << "Ingrese la longitud del tercer lado del triangunlo: "<< endl;
	double lado3;
	cin >> lado3;
	if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
		cout << "El triangulo es equilatero";
	}
	else if (lado1 == lado2 && lado2 != lado3 || lado1 != lado2 && lado2 == lado3 || lado1== lado3 && lado3 != lado2){
			cout << "Es un triangulo isosceles"; 
	}
	else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
		cout << "Es un triangulo escaleno";
		}
	else {
		cout << "Las entradas no son validas";
	}
	return 0;
}

