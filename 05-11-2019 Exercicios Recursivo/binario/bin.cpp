/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Nov 09 2019
*  Arquivo : bin.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
void binario(int n);

int main() 
{
	int n = 0;

	cout << "Decimal Para Binario" << endl;

	n = consistir();
	binario(n);

	cout << endl;
	system("pause");
	return 0;
}

int consistir(){
	int n = 0;
	
	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while(n < 0);
}
void binario(int n)
{
	if(n == 0)
		return;

	binario(n / 2);
	cout << (n % 2); //Depois d chamar a recursiva pra mostrar o binario na ordem correta (desempilhanmento)
}