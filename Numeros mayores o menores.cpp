#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2; 
	cout << "Ingrese el primer numero: "<< endl;
	cin >> num1;
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;
	if (num1 > num2) {
		cout << num1 << " Es mayor a " << num2;
	} else {
		cout << num2 << " Es mayor a " << num1;
	}
	
	return 0;
}

