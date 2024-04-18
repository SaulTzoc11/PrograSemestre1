#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int opcionmenu;
int controlm1=1, controlm2=1;
int veces=11;
string name;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menus(){
	cout << "Seleccione un menu"<<endl;
	cout << "1. Menu 1"<<endl;
	cout << "2. Menu 2"<<endl;
	cin >> opcionmenu;
}
	
void nombre(){
	cout<<"Ingrese su nombre: "<<endl;
	cin >> name;
}
void menu1(){
	do {
		system ("cls");
		int opcion, coordx, coordy, num;
		string word;
		cout << "Seleccione que desea realizar:"<<endl;
		cout << "1. Ingresar coordenadas "<<endl;
		cout << "2. Ingresar un numero"<<endl;
		cout <<"3. Ingresar una palabra"<<endl;
		cout << "4.Regresar al menu anterior"<<endl;
		cin >>opcion;
		
		switch (opcion){
		case 1:
			cout << "Ingrese coordenada de x"<<endl;
			cin >> coordx;
			cout << "Ingrese coordenada de y"<<endl;
			cin >>coordy;
			gotoxy(coordx, coordy);
			cout << "Hola mundo"<<endl;
			break;
		case 2:
			cout << "Ingrese un numero"<<endl;
			cin >> num;
			gotoxy(50,14);
			cout << num<<endl;
			break;
		case 3:
			cout << "Ingrese una palabra"<<endl;
			cin >>word;
			for (int p=0; p < veces; p++){
				cout << word<<endl;
			}
			break;
		case 4:
			menus();
		default:
			cout<< "Opcion no valida"<<endl;
		} cout << "Desea repetir el menu? 1.SI 2.NO"<<endl;
		cin >> controlm1;
		if (controlm1 ==2){
			cout << "Adios usuario";
		}
		else if(controlm1 != 1 && controlm1 !=2){
			cout << "Opcion no valida";
		}
		cin >> controlm1;
	}	while(controlm1==1);
}
void menu2(){
	do {
		int opcion;
		cout << "Seleccione una opcion: "<<endl;
		cout <<"1. Imprimir ASCCI"<<endl;
		cout << "2. Saludar a un companero"<<endl;
		cout << "3.Regresar al menu anterior"<<endl;
		cin >>opcion;
		switch (opcion){
		case 1:
			gotoxy(30,30);
			printf("%c",208);
			break;
		case 2:
				nombre();
				cout << "Hola "<<name<<endl;
				
			break;
		case 3:
			menus();
		default: 
			cout << "Opcion no valida"<<endl;
		} cout <<"desea repetir el menu? 1.Si 2.No"<<endl;
		cin >>controlm2;
		if (controlm2==2){
			cout << "Adios usuario"<<endl;
		}
		else if(controlm2!=1 && controlm2!=2){
			cout <<"Opcion no valida";
		}
	} while(controlm2==1);
	
}
int main(int argc, char *argv[]) {
	int control=1;
	do {
		menus();
		if (opcionmenu == 1)
		menu1();
		else if (opcionmenu==2)
			menu2();
		else 
			cout << "Ingrese un valor valido"<<endl;
		cout << "¿Desea repetir el menu? 1.SI 2.NO"<<endl;
		cin >> control;
		if (control!=2){
			cout << "Adios usuario"<<endl;
		}
	} while(control==1);
	return 0;
}

