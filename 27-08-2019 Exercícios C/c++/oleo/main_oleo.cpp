#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float vol = 0, pi = 3.14159, raio = 0, altura = 0; 
    
    cout << "Programa oléo \n";
    cout << " Entre com o raio: \n";
    cin >> raio;
    cout << "Entre com a altura: \n";
    cin >> altura;
    vol = pi * (raio * raio) * altura;
    cout << "O volume da lata é: " << vol << "\n";
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
