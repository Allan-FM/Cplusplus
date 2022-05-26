#include <iostream>

using namespace std;

int main()
{
	int vetor[]{ 10, 20, 30, 40, 50 };


	for (int i = 0; i < sizeof(vetor) / 4; i++)
	{
		cout << vetor[i] << "\n";
	}

	system("pause>0");
}
