#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1=0, num2;
	cout << "Ingrese un número: ";
	cin >> num2;
	while (num1 <= num2){
		cout << num1 << endl;
		num1++;
	}
	int num3 = 0,  num4;
	cout << "Ingrese un numero: ";
	cin >> num4;
	do {
		cout << num3 << endl;
		num3++;
	} while(num3<=num4);
	
	cout << "Ingrese un número: ";
	int num6;
	cin >> num6;
	for (int num5=0; num5<=num6; num5++){
		cout << num5<<endl;
	}
	return 0;
}

