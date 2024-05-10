#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int tamanio=5;
	int arreglo[tamanio];
	int sum=0; 
	for (int i = 0;i<tamanio;i++){
		cout << "Ingrese la nota "<<i<<endl;
		cin >> arreglo[i];
		sum = sum+arreglo[i];
	}
	double prom=sum/tamanio;
	cout << "El promedio es "<< prom<<endl;
	return 0;
}

