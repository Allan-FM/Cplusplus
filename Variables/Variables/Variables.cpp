#include <iostream>
using namespace std;
int main()
{
    //Variables:
    int myInt = 0;
    float myFloat = 1.2f;
    
    char myChar = 'A';
    string myString = "Allan";

    double myDouble = 123.123;

    bool myBool = true; // true or false;

    cout << "Enter you name: ";
    cin >> myString;
    cout << "Name -> " << myString << "\n";

	cout << "Enter you age: ";
	cin >> myInt;
	cout << "Age -> " << myInt;

    /*
	cout << myInt << "\n";
	cout << myFloat << "\n";

	cout << myChar << "\n";
	cout << myString << "\n";

	cout << myDouble << "\n";
	cout << myBool << "\n";
    */
    system("pause>0");
}

