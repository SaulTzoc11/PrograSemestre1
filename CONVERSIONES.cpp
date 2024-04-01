#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese el numero de opción de la conversion que quiere realizar:"<< endl;
	cout << "1. Kms a metros"<<endl;
	cout << "2. Metros a kms"<<endl;
	cout << "3. Pies a pulgadas"<<endl;
	cout << "4. Pulgadas a pies"<<endl;
	cout << "5. Kms a millas"<<endl;
	int opcion;
	cin >> opcion;
	if (opcion == 1){
		cout << "Ingrese los kms: "<<endl;
		double kms;
		cin >> kms;
		double mts;
		mts = kms * 1000;
		cout << "Son " << mts<<" metros";
	}
	else if (opcion == 2){
		cout << " Ingrese los mts: " << endl;
		double mts;
		double kms;
		cin >> mts;
		kms = mts/1000;
		cout << "Son " << kms<< " kilometros";
	}
	else if (opcion == 3){
		cout << "Ingrese los pies"<<endl;
		double fts;
		cin >> fts;
		double pulg;
		pulg = fts * 12;
		cout << "Son: "<< pulg<< " pulgadas";
	}
	else if (opcion == 4){
		cout << "Ingrese las pulgadas:"<<endl;
		double fts;
		double pulg;
		cin >> pulg;
		fts = pulg/12;
		cout << "Son: " << fts<<" pies";
	}
	else if (opcion==5){
		cout << "Ingrese los kms:"<<endl;
		double kms;
		cin>>kms;
		double millas;
		millas = kms/1.609;
		cout << "Son; "<< millas<<" millas";
	}
	return 0;
}

