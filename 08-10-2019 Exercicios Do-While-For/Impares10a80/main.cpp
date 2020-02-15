/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Thu Oct 10 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
    int i = 11;

    while(i <= 80) {
        cout << i << ", ";
        i = i + 2;
    }

    cout << "\n\n";
    i = 11;

    do {
        cout << i << ", ";
        i = i + 2;
    } while(i < 80);

    cout << "\n\n";

    for(i = 11; i < 80; i = i + 2) {
        cout << i << ", ";
    }

	system("pause");
    return 0;
}