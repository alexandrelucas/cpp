/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetorA[10], vetorB[10];

	cout << "Vetor A e Vetor B vezes 2\n";

	for(int i = 0; i <= 9; i = i + 1){
		vetorA[i] = i + 1;
	}
	for(int i = 0 i <= 9; i = i + 1){
		vetorB[i] = vetorA[i] * 2;
	}
	for(int i = 0; i <= 9; i = i + 1){
		cout << "VETOR A: " << vetorA << endl;
		cout << "VETOR B: " << vetorB << endl;
	}

	system("pause");
	return 0;
}