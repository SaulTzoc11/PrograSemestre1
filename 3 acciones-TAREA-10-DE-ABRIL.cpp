#include <iostream>
using namespace std;
void multiplos(double num1){
	for (double num2=1; num2<=num1; num2++){
		double multi;
		multi = num1*num2;
		cout << "Los multiplos son:"<< multi<<endl;
	}
	
}
	void factorial(double num1){
		int total=1;
		for (int num2=1; num2 <=num1; num2++ ){
			total=total*num2;
		}
		cout << "El factorial de "<<num1<< " es: "<< total<<endl;
	}
void fibonacci(double num1){
	int fib=0;
	for (int num2=0;num2<num1;num2++){
		fib=fib+num2;
	}
	cout << "El resultado del fibonacci de "<<num1<< " es "<< fib<<endl;
}
int main(int argc, char *argv[]) {
	double num1;
	cout << "Ingrese un numero: "<<endl;
	cin >> num1;
	multiplos(num1);
	factorial(num1);
	fibonacci(num1);
	return 0;
}

