/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : parImpar.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
void parImpar(int n);

int main() 
{
	int n = 0;
	n = consistir();

	cout << "Par ou Impar";

	parImpar(n);

	system("pause");
	return 0;
}

int consistir()
{
	int n = 0;
	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while( n < 0);
	return n;
}
void parImpar(int n)
{
	if(n % 2 == 0)
		cout << "O numero eh par" << endl;
	else
		cout << "O numro eh impar" << endl;
}