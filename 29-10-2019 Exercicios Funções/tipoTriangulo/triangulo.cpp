/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sun Nov 03 2019
*  Arquivo : triangulo.cpp
*******************************************/

#include <iostream>

using namespace std;

int consistir(char l);
void triangulo(int x,int y,int z);

int main() 
{
	int x = 0, y = 0, z =0;

	x = consistir('x');
	y = consistir('y');
	z = consistir('z');

	triangulo(x,y,z);

	system("pause");
	return 0;
}

int consistir(char l)
{
	int n = 0;
	do {
		cout << "Digite um numero para " << l << ": \n";
		cin >> n;
	} while( n < 0);
	return n;
}
void triangulo(int x, int y, int z)
{
	if(x == y && y == z)
		cout << "Triangulo Equilatero" << endl;
	else if(x != y && y != z && x != z)
		cout << "Triangulo Escaleno" << endl;
	else
		cout << "Triangulo Isosceles" << endl;
}