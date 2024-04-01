#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese su salario"<<endl;
	double salario;
	cin >> salario;
	if (salario <= 15000){
		cout << "Debe pagar 5% de impuestos";
	}
	else if (salario >=15001 && salario <=30000){
		cout << "Debe pagar el 12% de impuestos";
	}
	else if (salario >=30001 ){
		cout << "Debe pagar el 21% de impuestos";
	}
	return 0;
}

