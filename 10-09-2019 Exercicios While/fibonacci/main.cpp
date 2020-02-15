#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int termo = 0, proximo = 1, anterior = 0;

	while(termo < 2)
	{
		cout << "Insira um termo fibonacci: " << endl;
		cin >> termo;

		if(termo > 2)
		{
			cout << "\nSerie:" << endl;
			while(proximo <= termo)
			{
				cout << proximo << ", " ;
				proximo = proximo + anterior;
				anterior = proximo - anterior;
			}
		}
		else
			cout << "Termo invalido, tente novamente." << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}

