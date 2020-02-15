#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 0, r = 0;
    
    cout << "Digite um numero: \n";
    cin >> n;
    
    for (int x = 0; x < 11; x++) {
        r = n * x;
        cout << n << " X " << x << " = " << r << "\n";       
         }
    system("PAUSE");
    return EXIT_SUCCESS;
}
