#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int operacion, control=1;
	float sum, rest, mult, div, num1, num2;
	do {
		cout << "Hola usuario"<<endl;
		cout << "Que desea realizar? 1.Suma 2.Resta 3.Multiplicacion 4.Division"<<endl;
		cin >> operacion;
		cout << "Ingrese el primer numero"<<endl;
		cin >> num1;
		cout << "Ingrese el segudno numero"<<endl;
		cin >> num2;
		if (operacion==1){
			sum=num1+num2;
			cout << "El resultado es: "<< sum<<endl;
		}
		else if (operacion==2){
			rest =num1-num2;
			cout << "El resultado es "<< rest<<endl;
		}
		else if (operacion==3){
			mult=num1*num2;
			cout << "El producto es "<< mult<<endl;
		}
		else if (operacion==4){
			div=num1/num2;
			cout << "El resultado es "<< div<<endl;
		}
		else if (operacion >4){
			cout << "El valor ingresado no es valido"<<endl;
		}
		cout << "¿Desea realizar otra operacion? 1.Si 2.No"<<endl;
		cin >> control;
		if (control ==2){
			cout << "No desea realizar otra operacion, hasta pronto"<<endl;
		}
		else if (control !=1 && control !=2){
			cout << "No ingreso un valor valido"<< endl;
			control == 1;
		}
	} while(control==1);
	return 0;
}

