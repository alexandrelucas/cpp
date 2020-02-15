/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Nov 09 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
int soma(int n, int i);

int main() 
{
	int n = 0, i =0;

	cout << "Soma dos numros inteiros" << endl;

	n = consistir();
	i = consistir();

	cout << "Resultado: " << soma(n, i) << endl;

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
int soma(int n, int i)
{
	if(i == 0)
		return 0;

	return n + soma(n, i - 1);	
}