#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i = 8, soma = 0;

	while(i <= 98) {
		i = i + 2;
		soma = soma + i;
	}
	cout << "A soma dos pares e: " << soma << endl;
	system("pause");
	return 0;
}
