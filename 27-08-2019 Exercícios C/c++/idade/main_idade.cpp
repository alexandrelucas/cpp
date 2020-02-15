#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int dias = 0, meses = 0, anos = 0;
    
    cout << "Contar Anos" << endl;
    cout << "Insira seus dias de vida" << endl;
    cin >> dias;
    anos = dias / 365;
    meses = (dias % 365) / 30;
    dias = (dias % 365) % 30;
    cout << "Anos: " << anos << " Meses: " << meses << " Dias: " << dias << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
