#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float pi = 3.14, raio = 0, area = 0;
    
    cout << "Digite o raio: ";
    cin >> raio;
    area = pi*(raio * raio);
    cout << "A area da circunferencia é: "<< area << "\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
