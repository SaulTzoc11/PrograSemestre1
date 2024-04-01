#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese el numero de sabores que desea (maximo 6): ";
	int num;
	string bolas, lista; 
	cin >> num;
	if (num <=6){
		for (int veces=1; veces <=num; veces++){
			cout << "Ingrese el sabor numero "<< veces<<endl;
			cin >> bolas;
			lista = lista+" "+bolas;
			cout << "Los sabores de helado son "<<lista;
		}
	}else if (num >6){
		cout << "Esta fuera del maximo";
	}
	return 0;
}

