#include <iostream>
using namespace std;
int main()
{
	int n1 = 0;
	int n2 = 10;

	cout << "Incrementando e decrementando variaveis:" << "\n";

	cout << n1 << "\n";
	n1--;
	cout << n1 << "\n";
	n1 += 2;
	cout << n1 << "\n";
	
	cout << "\n";

	cout << n2 << "\n";
	n2--;
	cout << n2 << "\n";
	n2 += 2;
	cout << n2 << "\n\n";

	cout << "Pos Fixado - Pre Fixado: " << "\n\n";
	n1 = 10;
	cout << ++n1;

   system("pause>0");
}

