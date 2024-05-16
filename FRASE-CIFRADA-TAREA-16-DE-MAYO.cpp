#include <iostream>
#include <string>
using namespace std;
string cifrado(const string& cadena){
	string resultado= cadena;
	int longitud = resultado.length();
	for (int i=0; i<longitud;i++){
		char caracter=resultado[i];
		if (caracter=='a'||caracter=='A'){
			resultado[i]='4';
		}
		if (caracter=='e'||caracter=='E'){
			resultado[i]='3';
		}
		if (caracter=='i'||caracter=='I'){
			resultado[i]='1';
		}
		if (caracter=='o'||caracter=='O'){
			resultado[i]='0';
		}
		if (caracter=='u'||caracter=='U'){
			resultado[i]='*';
		}
	}
	return resultado;
}
int main(int argc, char *argv[]) {
	string frase, fraseCifrada;
	cout<<"Ingrese una frase: ";
	getline(cin, frase);
	fraseCifrada=cifrado(frase);
	cout<<"La frase cifrada es "<<fraseCifrada;
	return 0;
}

