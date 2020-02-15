/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Thu Oct 10 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
    int n = 5, fat = 1;

    cout << "Fatorial" << endl;

    do {
        cout << "Digite um numero maior que 0 e menor que 14\n";
        cin >> n;
    } while( n <= 0 || n > 14);

    for(int i = 1; i <= n; i++)
        fat = fat * i;

    cout << fat << endl;
	system("pause");
    return 0;
}