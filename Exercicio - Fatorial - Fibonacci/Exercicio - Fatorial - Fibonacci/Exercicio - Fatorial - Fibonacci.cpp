#include <iostream>

using namespace std;
int fibonacci(int number);
int fatorial(int number);
int main()
{
    int val;
    int res;

    val = 8;

    res = fatorial(val);
    cout << "Fatorial de -> " << val << ": " << ": " << res;

    cout << "\n\nFibonacci com " << val << " valores: ";
    for (int i = 0; i < val; i++)
    {
        cout << fibonacci(i + 1) << " ";
    }
    cout << "\n\n";

    system("pause>0");
}
int fatorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    return number * fatorial(number - 1);
}
int fibonacci(int number)
{
    if (number == 1 || number == 2)
    {
        return 1;
    }
    else
    {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}