#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int d = 0,m = 0, a = 0, dias = 0; 
    
    cout << "Digite os dias: ";
    cin >> d;
    cout << "Digite os meses: ";
    cin >> m;
    cout << "Digite os anos: ";
    cin >> a;
    dias = (d + (a * 365) + (m * 30));
    cout << "Dias: " << dias << "\n ";
     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
