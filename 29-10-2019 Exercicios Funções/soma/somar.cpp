/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : somar.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir() {
	int n = 0;

	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while (n < 0);
	return n;
}
int soma(int n1,int n2) {
	int result = n1 + n2;
	return result; 
}
int main() 
{
	int n1 = 0, n2 = 0, r = 0;

	cout << "Programa Soma (Sem Prototipo)" << endl;

	n1 = consistir();
	n2 = consistir();
	r = soma(n1,n2);

	cout << "resultado da soma: " << r << endl;
	system("pause");
	return 0;
}