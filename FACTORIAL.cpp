#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero: "<< endl;
	int num1, total=1;
	cin >> num1;
	for (int num2=1; num2 <=num1; num2++ ){
		total=total*num2;
	}
	cout << "El factorial es: "<< total<<endl;
	return 0;
}

