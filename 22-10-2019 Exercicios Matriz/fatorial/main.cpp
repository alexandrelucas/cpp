/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int a[2][2];
	int b[2][2];

	cout << "Fatorial na Matriz" << endl;

	for(int i= 0; i < 2; i++) {
		for(int j=0; j < 2; j++) {
			do
			{
				cout << "Digite um valor positivo para [" << i << "] [" << j << "]\n";
				cin >> a[i][j];
			} while (a[i][j] <= 0);
			
		}
	}
	//Gravar fatorial na matriz B
	for(int i = 0; i < 2; i++) {
		for(int j =0; j < 2; j++)
		{
			int fat = 1;
			for(int k = 1; k <= a[i][j]; k++)
			{
				fat = fat * k;
			}
			b[i][j] = fat;
		}
	}

	// Mostrando Matriz A
	cout << "Matriz A: " << endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << " " << a[i][j] << " | ";
		}
		cout << "\n";
	}
	// Mostrando Matriz B
	cout << endl;
	cout << "Matriz B: " << endl;
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			cout << " " << b[i][j] << " | ";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}