/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Sat Oct 12 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
    int n = 0, c = 0, i = 1;

    cout << "Numero Primo" << endl;
    do {
        cout << "Digite um numero: " << endl;
        cin >> n;
    } while( n <= 0);

    for(i = 1; i <= n; i = i + 1) {
        if(n % i == 0)
            c = c + 1;
    }
    if(c == 2)
        cout << n << " Eh um numero primo." << endl;
    else
        cout << n << " Nao eh um numero primo." << endl;

	system("pause");
    return 0;
}