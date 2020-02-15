#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int num = 0, cont = 0, i = 1;

	cout << "Verificar numero Primo" << endl;
	cout << "Digite um numero: " << endl;
	cin >> num;
	
	while(i <= num)
	{
		if((num % i) == 0)
			cont = cont + 1;
		i = i + 1;
	}
	if(cont == 2)
		cout << "O numero " << num << " eh um numero primo." << endl;
	else
		cout << "O numero " << num << " nao eh um numero primo." << endl;
		
	system("pause");
	return 0;
}

