/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetorA[10], vetorB[10], cont = 0;

	cout << "Numeros Primos\n";	

	//Entrada de Valores
	for(int i = 0; i <= 9; i = i + 1){
		cout << "Digite um numero\n";
		cin >> vetorA[i];
	}

	for(int i = 0; i <= 9; i = i + 1){
		//Reseta o contador
		cont = 0;
		
		for(int j = 1;j <= vetorA[i]; j = j + 1){
			if((vetorA[i] % j) == 0)
				cont = cont + 1;
		}
		if(cont == 2) {
			vetorB[i] = 1;
		}
		else 
			vetorB[i] = 0;
	}

	//Mostrar resultado
	for(int i = 0; i <= 9; i = i + 1){

		cout << "Vetor A [" << i << "] = " << vetorA[i];
		cout << " Vetor B [" << i << "] = " << vetorB[i] << endl;
	}
	
	system("pause");
	return 0;
}