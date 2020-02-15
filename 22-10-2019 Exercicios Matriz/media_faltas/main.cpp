/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 25 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int faltas[30][5];
	int vetor[30];

	cout << "Media de Faltas\n" << endl;

	//Insirir o numero de Faltas do Aluno na matriz
	for(int i = 0; i < 30; i++) {
		for(int j=0; j < 5; j++) {
			cout << "Insira a falta do Aluno [" << i << "] e Mês " << (j+1) << endl;
			cin >> faltas[i][j];
		}
	}


	//Soma os meses do aluno n e após isso faz a media por 5 (quantidade de meses)
	for(int i = 0; i < 30; i++) {
		int media = 0;
		
		for(int j =0; j < 5; j++)
		{
			media = media + faltas[i][j];
		}

		media = media / 5;

		vetor[i] = media;
	}

	//Mostrar na tela
	for(int i = 0; i < 30; i++) {
		
		int total = 0;
		for(int j = 0; j < 5; j++){
			total = total + faltas[i][j];
		}

		cout << "Total de Faltas para o Aluno [" << i << "] : " << total << endl;
		cout << "Media de falta para o Aluno [" << i << "] : " << vetor[i] << endl;
	}

	
	system("pause");
	return 0;
}