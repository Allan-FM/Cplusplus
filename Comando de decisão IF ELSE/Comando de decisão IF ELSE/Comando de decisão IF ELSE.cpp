#include <iostream>
using namespace std;
int main()
{
	// 	int num = 10;
	// 	int num1 = 10;
	// 	if (num == num1)// >, <, <=, >=, ==, !=
	// 	{
	// 		cout << "Acertou!";//true
	// 	}
	// 	else 
	// 	{
	// 		cout << "Errou!";//False
	// 	}


	incio:
	int n1;
	int n2;
	int res;
	cout << "Digite o valor da nota 1: ";
	cin >> n1;
	cout << "Digite o valor da nota 2: ";
	cin >> n2;
	res = (n1 + n2) / 2;
	cout << "Nota do aluno -> " << res << "\n\n";
	if (res >= 7)
	{
		cout << "Aluno aprovado!" << "\n";
	}
	else if(res == 5)
	{
		cout << "recuperacao" << "\n";
	}
	else
	{
		cout << "Reprovado!" << "\n";
	}

	char opc;
	cout << "Deseja inserir outras notas ? (s/n)" << "\n";
	cin >> opc;
	if (opc == 's')
	{
		goto incio;
	}
	else if(opc == 'n')
	{
		cout << "Clique enter para fechar o programa!";
	}


   system("pause>0");
}

