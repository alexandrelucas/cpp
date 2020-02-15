/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Nov 09 2019
*  Arquivo : somatoria.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
int soma(int n);

int main() 
{
	int n = 0;

	cout << "Soma dos pares" << endl;

	n = consistir();
	cout << "Resultado: " << soma(n) << endl;

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
int soma(int n)
{
	if(n == 0)
		return 0;
	if(n % 2 == 0)
		return n + soma(n - 2);
	return soma(n - 1);
}