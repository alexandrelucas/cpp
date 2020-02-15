/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetor[10];
	int matriz[10][10];

	cout << "Matriz, Vetor de 10 e Tabuada" << endl;

	//Inicializar a matriz
	for(int i=0; i < 10; i++) {
		do {
				cout << "Insira um valor de 1 a 10 para [" << i << "] \n";
				cin >> vetor[i];
			} while ((vetor[i] < 1) || (vetor[i] > 10));
	}

	//Armazenar na matriz a tabuada do numero armazenado no vetor
	for(int i=0; i < 10; i++)
	{
		 for(int j = 0; j < 10; j ++) {
			 matriz[i][j] = vetor[i] * (j+1);
		 }
	}
	
	cout << "\n";

	//Mostrar a Tabuada
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			cout << vetor[i] << " X " << (j+1) << " = " << matriz[i][j] << endl;
		}
	}

	system("pause");
	return 0;
}