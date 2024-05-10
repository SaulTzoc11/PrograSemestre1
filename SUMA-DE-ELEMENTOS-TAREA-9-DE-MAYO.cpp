#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int tamanio1 = 5;
	int arreglo1[tamanio1];
	int sum = 0;
	for (int i =0; i <tamanio1;i++){
		cout << "Ingrese el numero "<<i<<endl;
		cin >> arreglo1[i];
		sum=sum + arreglo1[i];
		cout << "El resultado es "<< sum<<endl;
	}
	return 0;
}

