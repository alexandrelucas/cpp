/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : areaTriangulo.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir();
void area(int b, int h);

int main() 
{
	int base = 0,  altura = 0;

	cout << "Area do Triangulo" << endl;
	cout << "Primeiro valor = Base, Segundo Valor = Altura" << endl;
	
	base = consistir();
	altura = consistir();

	area(base,altura);

	system("pause");
	return 0;
}

int consistir()
{
	int n = 0;
	do {
		cout << "Digite um numero: " << endl;
		cin >> n;
	} while( n <= 0);
	return n;
}
void area(int b,int h)
{
	int area = ((b * h) / 2);

	cout << "Area do Triangulo eh: " << area << endl;
}