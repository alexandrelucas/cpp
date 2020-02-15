/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : fatorial.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
int fatorial(int n);

int main() 
{
	int n = 0;
	
	cout << "Programa Fatorial" << endl;

	n = consistir();
	cout << fatorial(n) << endl;
	system("pause");
	return 0;
}

int consistir() {
	int n = 0;

	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while( n < 0);
	return n;
}
//Recursividade
int fatorial(int n)
{
	if(n <= 1)
		return 1;
	return (n * fatorial(n - 1));
}