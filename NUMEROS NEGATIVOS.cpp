#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Bienvenido usuario"<<endl;
	Sleep (1000);
	cout <<"Ingrese un número:"<<endl;
	int num;
	cin >> num;
	if (num > 0){
		cout << num << " es positivo"<< endl;
		 	if (num %2 ==0){
			cout << num << " es par"<< endl;
		}else {
			cout << num << " es impar"<<endl;
		}
	}else if (num<0){
			cout << num << " es negativo"<<endl;
			if (num %2 ==0){
				cout << num << " es par"<< endl;
			}else {
				cout << num << " es impar"<<endl;
	}
			}else {
		cout << num << " es negativo "<<endl;
	}
			
	return 0;
}

