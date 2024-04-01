#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un número: ";
	int num1;
	cin >> num1;
	for (int num2 = 1; num2 <= 10 ; num2++){
		int resultado = num1 * num2;
		cout << num1 << " x " << num2 << " es "<< resultado<<endl;
	}
	return 0;
}

