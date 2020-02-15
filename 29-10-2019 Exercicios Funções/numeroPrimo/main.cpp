/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
void primo(int n);

int main() 
{
	int n = 0;
	
	cout << "Numero Primo" << endl;

	n = consistir();
	primo(n);

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
void primo(int n)
{
	int cont = 0;
	for(int i = 1; i <= n; i++)
		if(n % i  == 0)
			cont = cont + 1;
	if(cont == 2)
		cout << n << " Eh um numero primo" << endl;
	else
		cout << n << " Nao eh um numero primo" << endl;
}