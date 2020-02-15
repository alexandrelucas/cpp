#include <iostream>

using namespace std;

int main(int argc, char** argv) {

	int i = 1, total = 50,soma = 0,mediag = 0,  n1 = 0, n2 = 0, n3 = 0, media = 0;

	while(i <= total)
	{
		cout << "Digite a nota 1 do Aluno [" << i << "]:" << endl;
		cin >> n1;
		cout << "Digite a nota 2 do Aluno [" << i << "]:" << endl;
		cin >> n2;
		cout << "Digite a nota 3 do Aluno [" << i << "]:" << endl;
		cin >> n3;

		media = ((n1*2) + (n2*4) + (n3*3) / 10);

		if(media >= 7)
			cout << "Aluno [" << i << "] " << "Aprovado" << endl;
		else
			cout << "Aluno [" << i << "] " << "Reprovado" << endl;

		soma = soma + media;
		cout << "\n==============================\n" << endl;

		i = i + 1;
	}
	cout << "Media Geral dos Alunos: " << (soma / total) << endl;
	system("pause");
	return 0;
}
