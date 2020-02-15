/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int m[2][2];

	cout << "Matriz de 2 Linhas e 2 Colunas" << endl;
	
	for(int i = 0; i <= 1; i++)
		for(int j = 0; j <= 1; j++) {
			cout << "Digite um valor para [" << i << "] [" << j << "]" << endl;
			cin >> m[i][j];
	}

	cout << "Mostrando a matriz: " << endl << endl;

	for(int i = 0; i <= 1; i++) {
		for(int j = 0; j <= 1; j++) {
			cout << " " << m[i][j] << " | ";
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}