#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	int ano;
	int edad;
	int act = 2024;
	cout << "Hola usuario, por favor ingresa tu a�o de nacimiento: " ; 
	cin >> ano;
	edad = act - ano; 
	cout << "Naciste en: " << ano << " y tienes " << edad << " a�os de edad";
	return 0;
}

