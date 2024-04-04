#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control=1;
	do{
		cout << "Hola usuario"<<endl;
		cout << "Bienvenido ak ciclo"<<endl;
		cout << "¿Desea repetir el ciclo? 1.Si 2.No"<<endl;
		cin >> control;
	} while(control==1);
	cout << "Saliendo del ciclo";
	return 0;
}

