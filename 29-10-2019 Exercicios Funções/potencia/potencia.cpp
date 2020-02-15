/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : potencia.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
int potencia(int a, int b);

int main() 
{
	int n1 = 0, n2 = 0, pot = 0;

	cout << "Calcular Potencia" << endl;

	n1 = consistir();
	n2 = consistir();
	pot = potencia(n1,n2);

	cout << pot << endl;
	system("pause");
	return 0;
}

int consistir()
{
	int n = 0;
	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while( n <= 0);
	return n;
}
int potencia(int a, int b)
{
	if(b == 0)
		return 1;
	while(b > 1){
		a = a * a;
		b = b - 1;
	}
	return a;
}