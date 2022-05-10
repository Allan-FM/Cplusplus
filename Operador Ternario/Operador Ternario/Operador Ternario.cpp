#include <iostream>
using namespace std;
int main()
{
	int nota1;
	int nota2;
	string res;

	cout << "Digite a primeira nota: ";
	cin >> nota1;
	cout << "Digite a segunda nota: ";
	cin >> nota2;
	int soma = (nota1 + nota2) / 2;

	(soma >= 7) ? res = "Aprovado" : res = "Reprovado";
	cout << "\n" << "Resultado -> " << res << "\n";

	system("pause>0");
}
