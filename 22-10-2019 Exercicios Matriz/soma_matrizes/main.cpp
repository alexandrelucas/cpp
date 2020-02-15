/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int a[3][3], b[3][3], c[3][3];


	cout << "Soma entre matrizes" << endl;

	//Matriz A
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
		{
			cout << "Digite um numero para a matriz A: " << endl;
			cin >> a[i][j];
		}
	}

	//Matriz B
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
		{
			cout << "Digite um numero para a matriz B: " << endl;
			cin >> b[i][j];
		}
	}


	//Matriz C
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	//Resultado
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++)
		{
			cout << "Resultado Matriz C: " << endl;
			cout << a[i][j];
		}
	}

	system("pause");
	return 0;
}