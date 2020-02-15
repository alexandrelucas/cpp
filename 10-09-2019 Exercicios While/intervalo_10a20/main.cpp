#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i = 1, n = 0, a = 0, b = 0;

	while(i <= 10){
		cout << "Insira um valor: " << endl;
		cin >> n;

		if(n >= 10 && n <= 20)
			a = a + 1;
		else if(n < 10 || n > 20)
			b = b + 1;

		i = i + 1;
	}

	cout << "Numero de valores dentro do intervalo [10,20]: " << a << endl;
	cout << "Numero de valores fora do intervalo [10,20]: " << b << endl;

	system("pause");
	return 0;
}
