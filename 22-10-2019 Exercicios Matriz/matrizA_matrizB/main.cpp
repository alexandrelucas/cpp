/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int mA[3][3];
	int mB[3][3];

	cout << "Matriz B = Matriz A" << endl;

	//Recebendo os valores do usuário para a matriz
	for(int i = 0; i < 3; i++) {
		for(int j =0; j < 3; j++) {
			cout << "Digite o valor para [" << i << "] [" << j << "]: " << endl;
			cin >> mA[i][j];
		}
	}
	
	//Passando os valores da matriz A para a matriz B
	for(int i = 0; i < 3; i++) {
		for(int j =0; j < 3; j++) {
			mA[i][j] = mB[i][j];
		}
	}

	// Mostrando Matriz A
	cout << "Matriz A: " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << " " << mA[i][j] << " | ";
		}
		cout << "\n";
	}
	// Mostrando Matriz B
	cout << endl;
	cout << "Matriz B: " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << " " << mB[i][j] << " | ";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}