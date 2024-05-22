#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
bool turnoX=false;  
	
char tablero[3][3]= {{'_','_','_'},
                     {'_','_','_'},
					 {'_','_','_'}
};

void iniciarTablero(){
	for (int i =0;i<3;i++){
		for (int j=0;j<3;j++){
			tablero[i][j]= '_' ;
		}
	}
}

char encontrarGanador(){
	for(int i = 0;i<3;i++){
		if(tablero[i][0] != '_' && tablero[i][0]== tablero[i][1] && tablero[i][1]== tablero[i][2]){
			return tablero[i][0];
		}
	}
	for(int i = 0;i<3;i++){
		if(tablero[0][i] != '_' && tablero[0][i]== tablero[1][i] && tablero[1][i]== tablero[2][i]){
			return tablero[0][i];
		}
	}
		if(tablero[0][0] != '_' && tablero[0][0]== tablero[1][1] && tablero[1][1]== tablero[2][2]){
			return tablero[0][0];
		}
		if(tablero[0][2] != '_' && tablero[0][2]== tablero[1][1] && tablero[1][1]== tablero[2][0]){
			return tablero[0][2];
		}
		return '_';
	}

bool encontrarEmpate(){
	for (int i =0;i<3;i++){
		for (int j=0;j<3;j++){
			if (tablero[i][j]=='_'){
				return false;
			}
		}
	}
	return true;
}

	

void mostrarTablero(){
	cout << " 0  1   2\n";
	for (int i =0;i<3;i++){
		for (int j=0;j<3;j++){
			cout << i << ".";
			cout <<tablero[i][j];
			if (j<2)cout <<"|";{
				
				
			}
		}
		cout<<endl;
	}
}
	void turno(string jugador1, string jugador2){
		char simbolo=turnoX ? 'X':'O';
		string player = turnoX ? jugador1:jugador2;
		int fila, columna;
		
		cout << "Turno de: "<<player<<" ("<<simbolo<<")"<<endl;
		do{
				cout <<"Ingrese la fila en donde desea jugar: ";
				cin>>fila;
				cout <<"Ingrese la columna en donde desea jugar: ";
				cin>>columna;
			if (fila < 0||fila>=3||columna<0||columna>=3||tablero[fila][columna] != '_'){
				cout <<"No es posible este movimiento intente de nuevo"<<endl;
			} 
		} while(fila < 0||fila>2||columna<0||columna>2||tablero[fila][columna] != '_');
		tablero[fila][columna]=simbolo;
		turnoX=!turnoX;
	}
	void iniciar(){
		string jugador1, jugador2;
		int control;
		srand(time(0));
		do {
			cout<<"Ingrese el nombre del jugador 1: "<<endl;
			cin>>jugador1;
			cout<<"Ingrese el nombre del jugador 2: "<<endl;
			cin>>jugador2;
			system("cls");
			turnoX =(rand()%2==0);
			if (turnoX){
				cout <<"Comienza "<<jugador1<< " juega con X"<<endl;
			}
			else {
				cout <<"Comienza "<<jugador2<<" juega con O"<<endl;
			}
			iniciarTablero();
			while (true){
				mostrarTablero();
				turno(jugador1,jugador2);
				char ganador=encontrarGanador();
				if (ganador != '_'){
					mostrarTablero();
					cout << "GANADOR: "<<(ganador=='X'?jugador1:jugador2)<<endl;
					break;
				}
				if (encontrarEmpate()){
					mostrarTablero();
					cout << "Es un empate"<<endl;
					break;
				}
			}
			cout<<"¿Quiere jugar otra vez? SI = 1 NO = 2: ";
			cin>>control;
			system("cls");
		} while(control==1);
	}

	
int main(int argc, char *argv[]) {
	iniciar();
	return 0;
}
  
