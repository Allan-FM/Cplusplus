#include <iostream>

using namespace std;

int main()
{
	int linha;
	int coluna;

	int matriz[2][2];

// 	matriz[0][0] = 0;
// 	matriz[0][1] = 0;
// 
// 	matriz[1][0] = 1;
// 	matriz[1][1] = 1;
// 
// 	for (linha = 0; linha < 2; linha++)
// 	{
// 		for (coluna = 0; coluna < 2; coluna++)
// 		{
// 			cout << matriz[linha][coluna] << " ";
// 		}
// 		cout << "\n";
// 	}
	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 2; coluna++)
		{
			//Adicionando o valor pelo teclado
			cin >> matriz[linha][coluna];

		}
	}
	for (linha = 0; linha < 2; linha++)
	{
		for (coluna = 0; coluna < 2; coluna++)
		{
			cout << matriz[linha][coluna] << " ";
		}
		cout << "\n";
	}


	system("pause>0");
}


