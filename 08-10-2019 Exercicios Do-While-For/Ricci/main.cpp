/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Oct 12 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int n = 0, i = 0, prox = 0, ant = 0, soma = 0;

	cout << "Serie Ricci" << endl; 

	do {
		cout << "Digite o numero de termos ricci maior que 3: " << endl;
		cin >> n;
	} while( n <= 3);
	do {
		cout << "Digite o primeiro termo da serie RICCI" << endl;
		cin >> ant;
	} while(ant >= n || ant <= 0);
	do {
		cout << "Digite o segundo termo da serie RICCI" << endl;
		cin >> prox;
	} while(prox >= n || prox <= 0 || prox < ant);

	for(i = 1; i <= n; i = i + 1) {
		cout << prox << ", ";
		soma = soma + prox;
		
		prox = prox + ant;
		ant = prox - ant;
		
	}
	cout << endl;
	cout << " Somatoria Final: " << soma << endl;
	system("pause");
	return 0;
} 