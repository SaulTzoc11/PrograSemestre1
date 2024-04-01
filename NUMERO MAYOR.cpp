#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Bienvendio usuario"<<endl;
	Sleep (1000);
	cout << "Ingrese un numero; "<<endl;
	double num1, num2, num3;
	cin >> num1;
	cout << "Ingrese otro numero; "<<endl;
	cin >> num2;
	cout << "Ingrese el ultimo numero; "<<endl;
	cin >> num3;
	if (num1 > num2 && num1 > num3){
		cout << num1 << " es mayor a todos los numeros";
	}else if (num2 > num1 && num2 > num3){
		cout << num2 << " es mayor a todos los numeros"; 
	}else if (num3 > num1 && num3 > num2){
		cout << num3 << " es mayor a todos los numeros";
	}else if (num1 == num2 && num1 == num3){
		cout << "Los numeros son iguales";
	}
	return 0;
}

