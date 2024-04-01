#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Cursos; 
	cout << "Ingrese el numero de cursos:";
	cin >> Cursos;
	if (Cursos == 5) {
		cout << "Es de primer semestre";
	}
	if (Cursos >= 7) {
		cout << "No se sabe el semestre";
	}
	return 0;
}

