/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : somatoria.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();

int main() 
{
	int n = 0, soma = 0;
	
	cout << "Somatoria" << endl;
	n = consistir();
	
	for(int i = 1; i <= soma; i++) {
		soma = soma + i;
	}

	cout << "Resultado da Soma: " << soma << endl;

	system("pause");
	return 0;
}

int consistir()
{
	int n = 0;
	do {
		cout << "Digite um numro: " << endl;
		cin >> n;
	} while( n < 0);
	return n;
}