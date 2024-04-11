#include <iostream>
#include <string>
using namespace std;
void menu(){
	int opcion;
	double num;
	char letra;
	string word;
		cout <<"Seleccione una opcion"<<endl;
		cout << "1. Ingresar un numero "<<endl;
		cout << "2. Ingresar una palabra "<<endl;
		cout << "3. Ingresar una letra "<<endl;
		cin >> opcion;
		switch(opcion){
		case 1:
			cout << "Ingresa un numero: ";
			cin >> num;
			cout << "Ingresaste el numero "<< num<<endl;;
			break;
		case 2:
			cout << "Ingresa una palabra: "<<endl;; 
			cin >> word;
			break;
		case 3:
			cout << "Ingresa una letra: "<<endl;;
			cin >> letra;
			break;
		default:
			cout << "Opcion no valida "<<endl;
		}
}
int main(int argc, char *argv[]) {
	int control=1;
	cout << "Hola usuario "<<endl;
	do {
		menu();
		cout << "Desea repetir? 1.SI 2.NO";
		cin >> control;
	} while(control ==1);
	return 0;
}

