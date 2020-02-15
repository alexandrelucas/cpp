/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Nov 09 2019
*  Arquivo : soma.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
int soma(int n);

int main() 
{
	int n = 0;

	cout << "Soma dos numros inteiros" << endl;

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

	return n + soma(n - 1);	
}
		
