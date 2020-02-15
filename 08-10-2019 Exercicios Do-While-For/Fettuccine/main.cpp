/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Oct 12 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int n = 0, i = 0, prox = 0, ant = 0, soma = 0, r = 0;

	cout << "Serie Fettuccine" << endl; 

	do {
		cout << "Digite o numero de termos Fettuccine maior que 3: " << endl;
		cin >> n;
	} while( n <= 3);
	do {
		cout << "Digite o primeiro termo da serie Fettuccine" << endl;
		cin >> ant;
	} while(ant >= n || ant <= 0);
	do {
		cout << "Digite o segundo termo da serie Fettuccine" << endl;
		cin >> prox;
	} while(prox >= n || prox <= 0 || prox < ant);

	cout << ant << ", ";
	cout << prox << ", ";
	soma = ant + prox;
	
	for(i = 3; i <= n; i = i + 1) {
		
		
		if(i % 2 == 0)
			r = prox - ant;
		else
			r = prox + ant;

		ant = prox;
		prox = r;
		soma = soma + prox;

		cout << r << ", ";
	}
	cout << endl;
	cout << " Somatoria Final: " << soma << endl;
	system("pause");
	return 0;
} 