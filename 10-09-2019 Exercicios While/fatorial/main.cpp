#include <iostream>

 using namespace std;

int main(int argc, char** argv) {

	int n = 0, seq = 2, fator = 0;

	while(n <= 0)
	{
		cout << "Insira um valor para fatorar: " << endl;
		cin >> n;
		
		if(n > 0)
		{
			seq = n-1;
			fator = n;
			while(seq > 0)
			{
				fator = fator * seq;
				seq = seq - 1;
			}
		}
		else 
			cout << "O numero inserido nao e um positivo." << endl;
	}
	cout << "O fatorando de: " << n << " eh : " << fator << endl;

	system("pause");
	return 0;
}
