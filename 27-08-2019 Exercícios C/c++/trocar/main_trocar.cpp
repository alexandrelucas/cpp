#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0;
    
    cout << "Programa Trocar Valores" << endl;
    cout << "Insira o valor A: " << endl;
    cin >> a;
    cout << "Insira o valor B: " << endl;
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "O valor de A eh: " << a << endl;
    cout << "O valor de B eh: " << b << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
