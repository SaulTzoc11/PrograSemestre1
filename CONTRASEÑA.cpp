#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese una contrase�a numerica con m�nimo 5 numeros"<<endl;
	int password;
	cin >> password;
	if (password %2!=0 && password %3 ==0 ){
		cout << "Su contrasenia es valida";
	}
	else {
		cout << "Su contrase�a no es valida";
	}
	return 0;
}

