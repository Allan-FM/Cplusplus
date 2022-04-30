#include <iostream>

using namespace std;
//Variavel Global
int varGlobal = 12;
int main()
{
	//Varivel local
	int varLocal = 10;
	//Operadores Matematicos: 
	// Adicao(+), Subtracao(-), Multiplicacao(*), Resto da divisao(%) - Mod, Divisao(/);

	cout << "Soma: " << varLocal + varGlobal << "\n";
	cout << "Subtracao: " << varLocal - varGlobal << "\n";
	cout << "Multiplicacao: " << varLocal * varGlobal << "\n";
	cout << "Divisao: " << varLocal / varGlobal << "\n";
	cout << "Resto da divisao: " << varLocal + varGlobal << "\n";

	system("pause>0");
}