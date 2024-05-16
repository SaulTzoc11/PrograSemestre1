#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int num, claveCifrada;
	double clave;
	cout << "Ingrese una clave numerica: "<<endl;
	cin >> clave;
	cout<< "Ingrese un numero: "<<endl;
	cin >>num;
	claveCifrada=(clave+num)*num;
 	cout<<"La clave numerica cifrada es: "<<claveCifrada;
	return 0;
}

