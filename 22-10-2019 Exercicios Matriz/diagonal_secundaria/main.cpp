/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int a[3][3];
	int b[3];

	cout << "Diagonal Secundária da Matriz" << endl;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << "Insira um valor: " << endl;
			cin >> a[i][j];
		}
	}


	//Pega os valores nas posições 0,2 | 1,1 || 2,0 da matriz referentes a uma diagonal e ao mesmo tempo armazena no vetor
	int k = 2;
	for(int i = 0; i < 3; i++) {
		b[i] = a[i][k];
		k--;
	}

	cout << "Matriz A: " << endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << " " << a[i][j] << " | ";
		}
		cout << "\n";
	}
	cout << endl;
	cout << "Vetor B: " << endl;
	for(int i = 0; i < 3; i++)
		cout << b[i] << endl;

	system("pause");
	return 0;
}