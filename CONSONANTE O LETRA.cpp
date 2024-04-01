#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
		cout << "Ingrese una letra: ";
	cin >> letra;
	letra = toupper(letra);
	if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
		cout << letra << " es una vocal";
	} else{
		cout << letra << " es una consonante";
	}
	return 0;
}

