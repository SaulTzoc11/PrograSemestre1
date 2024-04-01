#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero: ";
	int num1, yardas, millas, pies, pulgadas;
	cin >> num1;
	yardas = num1*1760;
	pies = num1*5280;
	pulgadas = num1*63360;
	
	cout << num1 << " son "<< yardas<< " yardas"<<endl;
	cout << num1 << " son "<< pies<<" pies "<<endl;
	cout << num1 << " son "<< pulgadas<<" pulgadas"<<endl;
	return 0;
}

