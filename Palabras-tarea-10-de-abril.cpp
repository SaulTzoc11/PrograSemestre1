#include <iostream>
#include <string>
using namespace std;
void palabras(string word1, string word2){
	cout << word1 << " "<<word2; 
}

int main(int argc, char *argv[]) {
	string word1, word2;
	int control= 1;
	do {
	cout << "Ingrese una palabra: "<<endl;
	cin >> word1;
	cout << "Ingrese otra palabra: "<<endl;
	cin >>word2;
	palabras(word1,word2);
	cout<< endl << "¿Desea repetir el programa? 1.Si 2. No"<<endl;
	cin >>control;
	}
	while (control==1);
}

