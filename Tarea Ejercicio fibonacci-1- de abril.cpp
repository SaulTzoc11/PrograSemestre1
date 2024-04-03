#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, contador=0;
	cout << "Ingrese un numero:"<<endl;
	
	cin >> num1;
	for (int num2=0; num2 < num1; num2++){
		contador = contador+num2;
	}
	cout << "El resultado es: "<< contador;
	return 0;
}

