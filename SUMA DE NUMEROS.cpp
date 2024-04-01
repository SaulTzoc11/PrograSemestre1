#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero: ";
	int num, suma=0;
	cin >> num;
	if (num %2==0){
		for (int npar=0; npar <=num; npar +=2 ){
			suma+=npar;
		}
		cout << "La suma de los numeros pares hasta "<< num<< " da como resultado "<< suma;
	}else {
		for (int nimpar=1; nimpar <= num; nimpar +=2){
			suma+=nimpar;
		}
		cout << "La suma de los numeros impares hasta "<< num<< " da como resultado "<< suma;
	}
	
	
	return 0;
}

