/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Fri Oct 18 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
	int vetorA[15];
	int decim = 0;

	cout << "Decimal para Binario" << endl;
	do {
		cout << "Digite um numero decimal" << endl;
		cin >> decim;
	} while(decim <= 0);

	for(int i = 0; i <= 14; i = i + 1) {
		if(decim >= 1) {
			vetorA[i] = (decim % 2);
			decim = decim / 2;
		} else {
			vetorA[i] = 0;
		}
	}

	for(int i = 14; i >= 0; i = i - 1)
		cout << vetorA[i] ;
	
	cout << endl;
	system("pause");
	return 0;
}