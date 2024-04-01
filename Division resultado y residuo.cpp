#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Realizar un programa que ingrese dos números. Por un lado, mostrar el resultado de división (no debe ser exacto). Por otro lado, debe mostrar el residuo.
	int numero1;
	int numero2;
	cout << "Ingrese el numero para dividir: ";
	cin >> numero1;
		cout << "Ingrese el numero que lo divida: ";
	cin >> numero2;
	int residuo;
	residuo	 = numero1 % numero2;
	cout << " El residuo es " << residuo << "\n";
		int resultado;
		resultado = numero1 / numero2;
		cout << " El Resultado es : " << resultado << "\n" ;
	
	
	return 0;
}

