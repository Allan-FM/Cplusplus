#include <iostream>

using namespace std;

void texto(string message);
void PrintLineAndWait(string message);
void sum(int a, int b);
int SumInt(int a, int b);

int main()
{
    texto("Allan");
    sum(235, 25555);

    int res = SumInt(1, 34);
    cout << "Valor de res -> " << res << "\n";

    PrintLineAndWait("mr robot");
    system("pause>0");
}
void texto(string message)
{
    cout << message << "\n";
}
void sum(int a, int b)
{
    cout << "soma dos valores -> " << a + b << "\n";
}
int SumInt(int a, int b)
{
    return a + b;
}
void PrintLineAndWait(string message)
{
    cout << message;
}
