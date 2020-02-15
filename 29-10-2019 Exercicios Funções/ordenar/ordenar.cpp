/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : ordenar.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
void ordenar(int n1, int n2);

int main() 
{
	int num1 = 0,num2 = 0;

	cout << "Programa Ordenar (Funcao)" << endl;

	//Consistir
	num1 = consistir();
	num2 = consistir();

	ordenar(num1,num2);

	system("pause");
	return 0;
}
int consistir()
{
	int n = 0;

	do {
	cout << "Digite um valor" << endl;
	cin >> n; 
	} while( n < 0);

	return n;
}
void ordenar(int n1,int n2) {
	int aux = 0;
	
	if(n1 == n2) 
		cout << n1 << ", " << n2 << " sao identicos." << endl;
	else {
		if(n1 > n2){
			aux = n2;
			n2 = n1;
			n1 = aux;
		}
		cout << "Em ordem crescente: " << n1 << ", " << n2 << endl;
		cout << "Em ordem decrescente: " << n2 << ", " << n1 << endl;
	}
	
}