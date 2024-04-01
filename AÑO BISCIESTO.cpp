#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un año: "<< endl;
	int year;
	cin >> year;
	if (year % 4 == 0 && year %100 !=0){
		cout << year << " es bisciesto";
	}else if (year % 100 == 0 && year % 400 !=0){
		cout << year << " no es bisciesto";
	}else if (year %100 == 0&& year % 400 == 0){
		cout << year << " es bisciesto";
	}else {
		cout << year << " no es bisciesto";
	}
	return 0;
}

