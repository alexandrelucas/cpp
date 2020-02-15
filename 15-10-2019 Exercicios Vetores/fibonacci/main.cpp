/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetorA[20];
	int termo = 0, prox = 1, ant = 0;

	for(int i = 0; i <= 19; i++){
		vetorA[i] = 0;
	}

	cout << "Serie Fibonacci" << endl;
	
	do {
		cout << "Digite um termo da serie fibonacci" << endl;
		cin >> termo;
	} while (termo <= 2);

	//Percorrer até o termo informado
	for(int i = 0; i < termo; i = i + 1) {
		
		//Armazenar no vetor até o termo informado
		if((prox <= termo))
			vetorA[i] = prox;

		// Atualiza o próximo termo fibonacci
		prox = prox + ant;
		ant = prox - ant;
	}

	for(int i = 0; i <= 19; i = i + 1) {
		cout << vetorA[i] << ",";
	}
	system("pause");
	return 0;
}