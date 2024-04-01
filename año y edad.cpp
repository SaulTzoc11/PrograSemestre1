#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	int ano;
	int edad;
	int act = 2024;
	cout << "Hola usuario, por favor ingresa tu año de nacimiento: " ; 
	cin >> ano;
	edad = act - ano; 
	cout << "Naciste en: " << ano << " y tienes " << edad << " años de edad";
	return 0;
}

