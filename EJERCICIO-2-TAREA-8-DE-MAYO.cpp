#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << endl;
	cout << "Arreglo 1 ( tamanio 3)";
	cout << endl;
	const int tamanio = 3;
	int arreglo1[tamanio];
	for (int i = 0; i <tamanio; i++){
		cout << "Ingrese un numero en la posicion "<<i <<endl;
		cin >> arreglo1[i];
		cout << "El numero ingresado es: "<< arreglo1[i]<<endl;
		
	}
	cout << endl;
	cout << "Arreglo 2 (tamanio 6)"<<endl;
	cout << endl;
	const int tamanio2=6;
	int arreglo2[tamanio2];
	for (int i =0; i <tamanio2;i++){
		cout << "Ingrese un numero en la posicion "<<i<<endl;
		cin >> arreglo2[i];
		cout << "El numero ingresado es "<<arreglo2[i]<<endl;
	}
	cout << endl;
	cout << "Arreglo 3 (tamanio 5)"<<endl;
	cout << endl;
	const int tamanio3=5;
	int arreglo3[tamanio];
	for (int i = 0; i<tamanio3; i++){
		cout << "Ingrese un numero en la posicion "<<i<<endl;
		cin >> arreglo3[i];
		cout << "El numero ingresaod es "<< arreglo3[i]<<endl;
	}
	
	cout << endl;
	cout << "Arreglo 4 (tamanio 7)"<<endl;
	cout << endl;
	const int tamanio4 = 7;
	int arreglo4[tamanio4];
	for (int i; i <tamanio4; i++){
		cout << "Ingrese un numero en la posicion "<<i<<endl;
		cin >> arreglo4[i];
		cout << "El numero ingresado es "<<arreglo4[i]<<endl;
	}
	
	cout << endl;
	cout << "Arreglo 5 (tamanio 10)"<<endl;
	cout << endl;
	const int tamanio5=10;
	int arreglo5[tamanio5];
	for (int i =0; i<tamanio5;i++){
		cout <<"Ingrese un numero en la posicion "<<i<<endl;
		cin>>arreglo5[i];
		cout<<"El numero ingresado es "<<arreglo5[i]<<endl;
		
	}
	return 0;
}

