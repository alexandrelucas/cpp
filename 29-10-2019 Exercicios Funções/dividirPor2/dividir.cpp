/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : dividir.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir() {
	int n = 0;

	do {
		cout << "Insira um numero: " << endl;
		cin >> n;
	} while(n < 0);

	return n;
}
float dividir(float n) {
	n = n / 2;

	return n;
}

int main() 
{
	int n = 0;

	cout << "Programa Dividir Por 2 (Sem Prototipo)" << endl;
	//Receber um numero
	n = consistir();

	cout << "Resultado: " << dividir((float)n) << endl;

	system("pause");
	return 0;
}