#include <iostream>

 using namespace std;

int main(int argc, char** argv) {

	int i = 1000;

	while(i <= 1999)
	{
		if ( (i % 11) == 5)
		cout << i << endl;
		
		i = i + 1;
	}

	system("pause");
	return 0;
}
