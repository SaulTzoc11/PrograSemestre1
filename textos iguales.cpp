#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string frase1, frase2;
	cout<< "Ingrese un texto: " << endl;
	getline (cin, frase1);
	cout << "Ingrese otro texto: " << endl;
	getline (cin, frase2);
	if (frase1 == frase2) {
		cout << "Los textos son iguales";
	} else{
		cout << " Los textos no son iguales";
	}
	return 0;
}

