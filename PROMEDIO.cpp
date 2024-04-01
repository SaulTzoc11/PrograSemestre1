#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Bienvenido"<<endl;
	Sleep(1000);
	cout << "Ingrese la primera nota (recuerde que sus nota deben ser mayor a 61 puntos para pasar en limpio) "<<endl;
	int nota1;
	cin >> nota1;
	cout << "Ingrese la segunda nota:"<<endl;
	int nota2;
	cin >> nota2;
	cout << "Ingrese la tercera nota:"<<endl;
	int nota3;
	cin >> nota3;
	if (nota1 >61 && nota2 >61 && nota3 > 61){
		int promedio;
		promedio = (nota1+nota2+nota3)/3;
			cout << "El promedio es de: " << promedio << " puntos";
	}else {
		cout << "Debe tener sus cursos en limpio";
	}
	return 0;
}

