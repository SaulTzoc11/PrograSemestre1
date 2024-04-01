#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese una letra: ";
	char letra;
	cin >> letra;
	if (letra>= 65 && letra <=90 ){
		cout << "La letra es mayuscula";
	}
	else if (letra >=97 && letra <= 122){
		cout << "La letra es minuscula";
	}
	return 0;
}

