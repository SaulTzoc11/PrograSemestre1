#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int tamanio=10;
	int arreglo[tamanio];
	for (int i=0;i<tamanio;i++){
		cout << "Ingrese un numero para la posicion "<<i<<" del arreglo"<<endl;
		cin >> arreglo[i];
	}
	int numexterno;
	cout << "Ingrese un numero"<<endl;
	cin >> numexterno;
	bool suerte = false;
	for (int i =0; i<tamanio;i++ ){
		if (arreglo[i]==numexterno){
			suerte = true ;
		}
	}
	if (!suerte){
		cout << "Mala suerte :(";
	}
	else {
		cout << "FELICIDADES :D";
	}
	return 0;
}

