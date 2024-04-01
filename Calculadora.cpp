#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1;
	double num2;

cout << "Ingrese dos números: \n"; 
cout << "Ingrese el primer número: "; 
cin >> num1;
cout << "Ingrese el segundo número: "; 
cin >> num2; 
cout << endl;
cout << "¿Que operacion quiere realizar? (+, -, *, /) : ";
char operacion;
cin >> operacion; 

double resultado; 
if  (operacion == '+' ) {
	resultado = num1 + num2;
}
else if (operacion == '-') {
	resultado = num1 - num2; 
} 
else if ( operacion == '*') { 
	resultado = num1 * num2;
}
else if ( operacion == '/') {
	resultado = num1 / num2; 
} 
else {
	cout << "No elegio una operación"; 
} 
cout << "El resultado de la operación es: " << resultado; 
	


	return 0;
}

