#include <iostream>
using namespace std;
int main()
{
	//AND(&&) - OR (||) - NOT (!)

	int num = 8;
	if ((num > 4 && num < 7) || (num >= 8 && num <= 7))
	{
		cout << "Valor aceito! \n";
	}
	else 
	{
		cout << "Valor nao aceito! \n";
	}
	if (num > 4 || num < 7)
	{
		cout << "Valor aceito! \n";
	}
	else
	{
		cout << "Valor nao aceito! \n";
	}
	if (!num)
	{
		cout << "Verdadeiro\n";
	}
	else
	{
		cout << "Falso \n";
	}

   system("pause>0");
}
