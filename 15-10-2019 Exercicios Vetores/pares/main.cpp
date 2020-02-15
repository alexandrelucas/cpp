/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int pares[20];
	int cont = 10;

	cout << "Pares\n";

	for(int i = 0; i <= 19; i = i + 1) {
		pares[i] = i + cont;
		cont = cont + 1;
	}
	for(int i = 0; i <= 19; i = i + 1) {
		cout << pares[i] << endl;
	}
	system("pause");
	return 0;
}