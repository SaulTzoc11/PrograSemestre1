#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ano;
	cout << "Ingrese un a�o: ";
	cin >> ano;
	int resultb;
	resultb = ano % 4;
	if ( resultb < 1) {
		cout <<  ano << " Es a�o bisiesto";
	}
	if (resultb >= 1 ) {
		cout << ano << " No es a�o bisiesto";
	}
		
	return 0;
}

