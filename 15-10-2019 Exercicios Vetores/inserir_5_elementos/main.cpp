/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetorA[5];

	cout << "Inserir 5 elementos no vetor\n";
	for(int i = 0; i <= 4; i = i + 1) {
		cout << "Digite um numero\n";
		cin >> vetorA[i];
	}
	for(int i = 0; i <= 4; i = i + 1) {
		cout << vetorA[i] << endl;
	}
	system("pause");
	return 0;
}