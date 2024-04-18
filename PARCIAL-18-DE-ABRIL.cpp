#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
void hip(){
	double ladady, ladop, hip, pot;
	cout << "Ingrese el lado adyacente del triangulo"<<endl;
	cin >> ladady;
	cout << "Ingrese el lado opuesto del triangulo"<<endl;
	cin >> ladop;
	pot = (ladady*ladady)+(ladop*ladop);
	hip= sqrt(pot);
	cout << "La hipotenusa es "<<hip<<endl;
}
void angu(){
	double ang1, ang2, ang3;
	cout <<"Ingrese el primer angulo"<<endl;
	cin >> ang1;
	cout << "Ingrese el segundo angulo"<<endl;
	cin >> ang2;
	ang3= 180-ang1-ang2;
	system ("cls");
	cout << "El angulo faltante es de "<<ang3<<" grados "<<endl;
	
}
void facto(){
	int num, total=1;
	cout << "Ingrese el numero el cual quiere encontrar el factorial "<<endl;
	cin >> num;
	for (int num2=1; num2<num;num2++){
		total= total*num2;
	}
	system ("cls");
	cout << "El factorial es "<< total;
}
void devolver(){
	double gasto, dinero, vuelto;
	cout << "Ingrese la cantidad gastada"<<endl;
	cin >> gasto;
	cout << "Ingrese la cantidad para pagar"<<endl;
	cin >> dinero;
	if (gasto>dinero){
		cout << "Lo siento, no le alcanza para pagar"<<endl;
	}
	else {
		vuelto = dinero - gasto;
		cout <<"Su vuelto es "<< vuelto << endl;
	}
}
int main(int argc, char *argv[]) {
	int opcion, control=1;
	do {
		cout << "Seleccione la opcion que desea realizar "<<endl;
		cout << "1.Hallar la hipotenusa"<<endl;
		cout << "2.Hallar angulo faltante"<<endl;
		cout << "3.Hallar factorial"<<endl;
		cout << "4.calculadora de vuelto"<<endl;
		cin >> opcion;
		switch (opcion){
		case 1:
			hip();
			break;
		case 2:
			angu();
			break;
		case 3:
			facto();
			break;
		case 4:
			devolver();
			break;
		default:
			cout << "Opcion no valida";
		}
		cout << "Desea repetir el menu? 1.Si 2.No"<<endl;
		cin >> control;
		system ("cls");
		if (control==2){
			cout <<"Hasta pronto usuario"<<endl;
		}
		else if(control !=1 && control!=2){
			cout << "opcion no valida"<<endl;
		}
	} while(control==1);
	
	return 0;
}

