/******************************************
*  Autor: Alexandre Lucas   
*  Criado em: Thu Oct 10 2019
*  Arquivo : main.cpp
*******************************************/

#include <iostream>

using namespace std;

int main() 
{
    cout << "Usando o COMANDO WHILE" << endl;
	
    int i = 1;
    while(i <= 50) {
        cout << i << ", ";
        i = i + 1;
    }
    
    getchar();
    system("cls");
    cout << "Usando o COMANDO DO WHILE" << endl;
    

    i = 0;
    do {
        i = i + 1;
        cout << i << ", ";
    } while(i < 50);

    getchar();
    system("cls");
    cout << "Usando o COMANDO FOR" << endl;

    for(i = 1; i <= 50; i = i + 1) {
        cout << i << ", ";
    }

    cout << endl;
    system("pause");
    return 0;
}