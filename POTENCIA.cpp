#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero: "<<endl;
	int num1, num2, total=1;
	cin >> num1;
	cout << "Ingrese un numero del 1 al 10 para elevar a la potencia: "<<endl;
	cin >> num2;
	if (num2 <10) {
		for(int contador = 1; contador <=num2; contador++){
			total=total*num1;
			
		}
		cout << "El resultado es: "<< total<<endl;
	}else if (num2 >10){
		cout << "El numero ingresado no es valido";
	}
	return 0;
}

