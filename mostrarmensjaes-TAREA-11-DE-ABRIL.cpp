#include <iostream>
using namespace std;
void mostrarMensaje(){
	int opcion;
	cout << "Seleccione una opcion"<<endl;
	cout << "1. Mensaje 1"<<endl;
	cout << "2. Mensaje 2"<<endl;
	cout << "3. Mensaje 3"<<endl;
	cout << "4. Mensaje 4"<<endl;
	cout << "5. Mensaje 5"<<endl;
	cout << "6. Mensaje 6"<<endl;
	cin >> opcion;
	switch (opcion){
	case 1:
		cout << "Mensaje 1 + 5? Me repites ese numerin? "<<endl; 
		break;
	case 2:
		cout <<"Mensaje 2 + 4? Me repites ese numernin?"<<endl;
		break;
	case 3:
		cout << "Mensaje 3 + 3? Me repites ese numerin?"<<endl;
		break;
	case 4:
		cout<< "Mnesaje 4 + 2? Me repites ese numerin?"<<endl;
		break;
	case 5:
		cout << "Mensaje 5 + 1? me repites ese numerin?"<<endl;
		break;
	case 6:
		cout << "Me repites ese numerin?"<<endl;
		break;
	default:
		cout<< "Chistoso Ingresaste un valor no valido"<<endl;
	}
}
int main(int argc, char *argv[]) {
	cout << "Bienvenido usuario"<<endl;
	mostrarMensaje();
	return 0;
}

