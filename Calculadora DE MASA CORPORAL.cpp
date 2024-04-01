#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese su altura en mts"<<endl;
	double altura, peso, masa;
	cin >> altura;
	cout << "Ingrese su peso en kg"<<endl;
	cin >> peso;
	masa = (peso/(altura * altura));
	cout << "Su masa corporal es "<<masa<<endl;
	if (masa < 18.5){
		cout << "Tiene un peso bajo";
		
	}
	else if (masa >= 18.5 && masa <=25){
		cout << "Tiene un peso normal";
	}
	else if (masa >= 25 && masa <= 30){
		cout << "Tiene sobrepeso";
	}
	else if (masa >30 ){
		cout << "Tiene obesidad";
	}
	return 0;
}

