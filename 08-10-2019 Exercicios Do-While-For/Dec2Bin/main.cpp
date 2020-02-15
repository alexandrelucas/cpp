/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Thu Oct 10 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
    int n = 0, valor = 0;

    cout << "Decimal para Binario" << endl;

    do {
        system("cls");
        cout << "DIgite um numero positivo: " << endl;
        cin >> n;
    } while(n <= 0);

    do {
        cout << n % 2;
        n = n / 2;
    } while(n > 0);

    system("pause");
    return 0;
}