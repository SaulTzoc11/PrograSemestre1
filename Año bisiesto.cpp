#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ano;
	cout << "Ingrese un año: ";
	cin >> ano;
	int resultb;
	resultb = ano % 4;
	if ( resultb < 1) {
		cout <<  ano << " Es año bisiesto";
	}
	if (resultb >= 1 ) {
		cout << ano << " No es año bisiesto";
	}
		
	return 0;
}

