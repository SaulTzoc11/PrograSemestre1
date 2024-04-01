#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "ingrese los años que lleva en la empresa"<<endl;
	int tiempo;
	cin >> tiempo;
	cout << "Ingrese su sueldo"<< endl;
	double sueldo;
	cin >> sueldo;
	if (tiempo >=1 && tiempo <=5) {
		double bono;
		bono = sueldo * 0.05;
		cout << "Su bono sera de: " << bono << " quetzales";
		if (tiempo >5){
			bono = sueldo * 0.10;
			cout << " Su bono sera de: " << bono << " quetzales";
		}
	}else {
		cout << "No cumple el tiempo para recibir un bono";
	}
	return 0;
}

