/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetor[10];

	cout << "Insirir Elementos no Vetor\n";
	for(int i = 0 ; i <= 9; i = i + 1) {
		vetor[i] = i + 1;
	}
	for(int i = 0; i < 10; i = i + 1)
		cout << vetor[i] << endl;

	system("pause");
	return 0;
}