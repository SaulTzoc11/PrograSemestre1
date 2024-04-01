#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese la primera nota"<<endl;
	double nota1, nota2, nota3, nota4, nota5;
	cin >> nota1;
	cout << "Ingrese la segunda nota"<<endl;
	cin >> nota2;
	cout << "Ingrese la tercera nota"<<endl;
	cin >> nota3;
	cout << "Ingrese la cuarta nota"<<endl;
	cin >> nota4;
	cout << "Ingrese la quinta nota"<<endl;
	cin >> nota5;
	double prom;
	prom = ((nota1 + nota2 + nota3 + nota4+ nota5)/5);
	cout << " Su promedio es de: " << prom <<endl;
		if (prom < 61){
			cout << "No tinene permitido realizar su examen privado";
		}
		else if (prom >= 61 && prom <= 75){
			cout << " Si realiza trabajo comunitario puede realizar su examen privado";
		}
		else if (prom >=76 && prom <= 85){
			cout << "Tiene un promedio normal, puede realizar su examen privado";
		}
		else if (prom >=86 && prom <= 90){
			cout << "Promedio alto, se gradua con honores";
		}
		else if (prom >=91 && prom <= 95){
			cout << "Promedio muy alto, se gradua con maximos honores";
		}
		else if (prom >=95){
			cout << "puede exonerarse del examen privado, felicidades";
		}
	return 0;
}

