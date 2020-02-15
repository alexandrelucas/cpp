/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Oct 12 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int n = 0, i = 0, prox = 1, ant = 0;

	cout << "Termo fibonacci" << endl;

	do {
		cout << "Digite um termo: " << endl;
		cin >> n;
	} while( n <= 0);

	for(i = 1; i < n; i = i + 1) {
		prox = prox + ant;
		ant = prox - ant;
	}
	cout << "Termo Fibonnaci de: " << n << " eh: " << prox << endl;
	system("pause");
	return 0;
}