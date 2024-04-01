#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero: "<<endl;
	int num1;
	cin >> num1;
	for (int num2=1; num2<=num1; num2++)
		if (num1%num2==0 ){
			cout << " Es divisible exactamente con " << num2<<endl;
		}
	return 0;
}

