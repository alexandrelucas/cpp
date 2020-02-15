#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int num = 0, cont = 0;
	
	do
	{
		system("cls");
		cout << "Digite um numero positivo na base decimal:" << endl;
		cin >> num;
	
		cont = (int)num;
		if(num > 0)	
		while(cont > 0.1)
		{
			if((int)cont % 2 == 0)
				cout << "0";
			else
				cout << "1";
				
			cont = cont / 2;
		}
	} while(num < 0);
	
	cout << "\n";
	system("pause");
	return 0;
}
