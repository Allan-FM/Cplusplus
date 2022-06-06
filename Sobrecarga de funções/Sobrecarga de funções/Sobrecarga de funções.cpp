#include <iostream>
//podemos passar funcoes com o mesmo nome porem elas precisam ter argumentos
using namespace std;

void Soma();
void Soma(int n1, int n2);
int main()
{

	Soma();
	Soma(23, 34);
	system("pause>0");
}

void Soma()
{
	int n1 = 10;
	int n2 = 20;
	int res = n1 + n2;

	cout << " A soma de " << n1 << " + " << n2 << " = " << res << "\n";
}
void Soma(int n1, int n2) //com argumentos
{
	int res = n1 + n2;
	cout << "\n A soma de " << n1 << " + " << n2 << " = " << res;
}

