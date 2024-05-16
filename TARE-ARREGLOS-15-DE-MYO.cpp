#include <iostream>
#include <windows.h>
using namespace std;
	void menu (){
	const int tamanio=5;
	int arreglo[tamanio];
	int opc;
	cout<< "Opcion 1."<<endl;
	cout<< "Opcion 2."<<endl;
	cout<< "Opcion 3."<<endl;
	cout<< "Opcion 4."<<endl;
	cin >> opc;
	system("cls");
	switch (opc){
	case 1:
		for (int i =4; i >= 0;i--){
			cout<< "Ingrese un numero: "<<endl;
			cin >> arreglo[i];
		}
		for (int i=0; i<5;i++ ){
			cout << "el numero en la posicion "<< i << " es "<<arreglo[i]<<endl;
		}
	break;
	case 2:
		for (int i =0;i<3;i++){
			cout <<"Ingrese un numero: "<<endl;
			cin >>arreglo[i];
			cout <<"El numero en la posicion "<<i<<" es "<<arreglo[i]<<endl;
			cout <<endl;
			cout <<"El numero en la posicion "<<i<<" es "<<arreglo[i]<<endl;
		}
		break;
	case 3: {
		const int tam=10;
		int arreglo2[tam];
		int posi;
		for (int i=0;i<10;i++){
			cout<<"Ingrese un numero: "<<endl;
			cin>>arreglo2[i];
			if (arreglo2[i]<0){
				posi=arreglo2[i]*-1;
			}
			else {
				posi=arreglo2[i];
			}
			cout<<"El numero en la posicion "<<i<<" es "<<posi<<endl;
		}
	}break; 
	case 4:
		const int tamanio=5;
		double arreglo3[tamanio];
		int ente[tamanio];
		double deci[tamanio];
		for (int i=0; i<5;i++){
			cout << "Ingrese un numero decimal: "<<endl;
			cin>>arreglo3[i];
			ente[i]=arreglo3[i];
			deci[i]= arreglo3[i]-ente[i];
		}
		for (int i=0;i<5;i++){
			cout<< "Los numeros enteros en la posicion "<< i << " es "<<ente[i]<<endl;
		}
		cout<<endl;
		for (int i=0;i<5;i++){
			cout<<"Los valores decimales en la posicion "<<i<< " es "<<deci[i]<<endl;
		}
		break;
	} 
}
int main(int argc, char *argv[]) {
	int control = 1;
	do{
		cout << "Elija una opcion"<<endl;
		menu();
		cout << "Desea volver 1.SI 2.NO"<<endl;
		cin >> control;
		system("cls");
	} while(control == 1);
	return 0;
}

