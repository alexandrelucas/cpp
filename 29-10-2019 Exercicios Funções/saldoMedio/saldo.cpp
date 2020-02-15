/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : saldo.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
void saldoMedio(int saldo);

int main() 
{
	int saldo = 0;
	cout << "Saldo Medio e Credito" << endl;

	saldo = consistir();
	saldoMedio(saldo);
	
	system("pause");
	return 0;
}

int consistir()
{
	int n = 0;
	do {
		cout << "Digite seu Saldo Medio: " << endl;
		cin >> n;
	} while( n < 0);
	return n;
}
void saldoMedio(int saldo)
{
	int credito = 0;

	if(saldo >= 201 && saldo <= 400)
		credito = (saldo * 20) / 100;
	else if(saldo >= 401 && saldo <= 600) 
		credito = (saldo * 30) / 100;
	else if(saldo > 601) 
		credito = (saldo * 40) / 100;
	else 
		credito = 0;

	credito = saldo + credito;
	cout << "Seu saldo medio: " << saldo << endl;
	cout << "Seu credito disponivel: " << credito << endl;


}