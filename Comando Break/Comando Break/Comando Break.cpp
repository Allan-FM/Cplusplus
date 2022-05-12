#include <iostream>
using namespace std;
int main()
{

	int num = 0;
	while (num < 100)
	{
		cout << num << "\n";
		num++;
		if (num == 50)
		{
			break;
		}
	}
	system("pause>0");
}
