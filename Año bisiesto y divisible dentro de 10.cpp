#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int year;
	cout << "Ingrese un año: " << endl;
	cin >> year;
	if (year % 4 == 0 && year % 10 == 0){
		cout << year << " Es año biciesto y es divisible exactamente dentro de 10";
	}if (year % 4 == 0 && year %10 != 0) {
		cout << year << " Es biciesto pero no es divisible exactamente dentro de 10";
	}if (year % 4 != 0 && year % 10 == 0){
		cout << year << " No es biciesto pero si es divisible dentro de 10";
	}
	else {
		cout << year << " No es biciesto y no es divisible exactamente dentro de 10";
	}
	return 0;
}

