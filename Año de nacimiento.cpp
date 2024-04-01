#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nacimiento; 
	cout << "Ingrese el año de su nacimiento:";
	cin >> nacimiento;
	if (nacimiento >=2000) {
		cout << "Es del siglo 21";
	}
	else {
		cout << "Es del siglo 20";
	}
	return 0;
}

