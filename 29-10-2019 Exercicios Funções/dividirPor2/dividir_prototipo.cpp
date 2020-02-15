/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : dividir(prototipo).cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
float dividir(float n);

int main() 
{
	int n = 0;

	cout << "Programa Dividir Por 2 (Com Prototipo)" << endl;
	//Receber um numero
	n = consistir();

	cout << "Resultado: " << dividir((float)n) << endl;

	system("pause");
	return 0;
}
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