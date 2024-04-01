#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero: ";
	int num, divisor=0;
	cin >> num;
	for (int contador=1; contador<=num; contador++){
		if (num%contador==0){
			divisor++;
		}
	}
	if (divisor <=2){
		cout << num<< " es primo";
	}
	else {
		cout << num << " no es primo";
	}
	return 0;
}

