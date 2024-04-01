#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad1, edad2;
	cout << "Ingrese una edad: " << endl;
	cin >> edad1;
	cout << "Ingrese otra edad: " << endl;
	cin >> edad2;
	if (edad1 >= 18 && edad2 >= 18){
		cout << "Ambos son mayores de edad"<< endl;
	} else {
		if (edad1 >= 18) {
			cout << "Solo la primera edad es mayor de edad"<<endl;
		} else if(edad2 >= 18){
			cout << "Solo la segunda edad es mayor de edad";
		}else {
			cout << "Ninguna es mayor de edad";
		}
	}
	
	
	return 0;
}

