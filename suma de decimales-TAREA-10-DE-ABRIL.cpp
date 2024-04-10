#include <iostream>
using namespace std;
void suma(double num1, double num2, double num3){
	double result;
	result = num1 + num2 + num3;
	cout << "La suma de los tres numeros es "<< result<<endl;
}
int main(int argc, char *argv[]) {
	double num1, num2, num3;
	int control=1;
	do{
	cout << "Ingrese tres numeros con decimales:"<<endl;
	cin>>num1;
	cin>>num2;
	cin>>num3;
	suma(num1,num2,num3);
	cout<<"¿Desea repetir el programa? SI 1 NO 2"<<endl;
	cin >> control;
	}
	while(control==1);
	return 0;
}

