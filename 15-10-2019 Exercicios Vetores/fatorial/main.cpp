/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetorA[5], vetorB[5], fat = 1;

	cout << "Calcular Fatorial" << endl;

	for(int i = 0; i <= 4; i = i + 1) {
		cout << "Digite um numero para fatorar\n";
		cin >> vetorA[i];
	}
	for(int i = 0; i <= 4; i = i + 1) {
		fat = 1;
		for(int j = 1; j <= vetorA[i]; j = j + 1)
			fat = fat * j;
		vetorB[i] = fat;
	}

	for(int i = 0; i <= 4; i = i + 1){
		cout << " VetorA [" << i << "] = " << vetorA[i];
		cout << " VetorB [" << i << "] = " << vetorB[i] << endl;
	}

	system("pause");
	return 0;
}