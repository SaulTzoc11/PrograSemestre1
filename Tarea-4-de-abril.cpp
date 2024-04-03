#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num=0;
	cout << "Ingrese un numero:"<<endl;
	cin>> num;
	switch (num){
	case 1:
	case 3:
			cout << "Area comun"<<endl;
		break;
	case 5:
	case 7:
		cout<< "Area especifica"<<endl;
		break;
	default:
		cout <<"No nos econtramos en ese semestre"<<endl;
		break;
	}
	cout << "Fin del Switch";
	return 0;
}

