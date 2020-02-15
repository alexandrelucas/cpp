/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Nov 09 2019
*  Arquivo : fib.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
int fib(int n);

int main() 
{
	int n = 0;

	cout << "Fibonacci" << endl;

	n = consistir();
	cout << "Resultado: " << fib(n) << endl;

	system("pause");
	return 0;
}

int consistir(){
	int n = 0;
	
	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while(n < 0);
}
int fib(int n)
{
	if(n <= 2)
		return 1;

	return fib(n - 1) + fib(n - 2);	
}