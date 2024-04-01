#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ingrese grados: ";
	float grados;
	cin >> grados;
	if (grados < 2){
		cout << "Hace frio";
	}else if (grados >=2 && grados <=10){
		cout << " Es templado";
	}else if (grados >= 10){
		cout << "Es caliente";
	}
	return 0;
}

