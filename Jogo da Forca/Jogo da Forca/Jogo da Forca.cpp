#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char palavraSecreta[30];
    char letra[1];
    char palavra[30];

    int indice = 0;
    int tamanhoDaPalavra = 0;
    int chances = 6;
    int acertos = 0;

    bool acerto = false;

    cout << "Digite a palavra secreta -> ";
    cin >> palavraSecreta;
    system("cls");

    while (palavraSecreta[indice] != '\0')
    {
        indice++;
        tamanhoDaPalavra++;
    }
	for (indice = 0; indice < 30; indice++)
	{
		palavra[indice] = '_';
	}

    while ((chances > 0) && (acertos < tamanhoDaPalavra))
    {
        cout << "Chances restantes -> " << chances << "\n\n";
        cout << "Palavra secreta -> ";
        for (indice = 0; indice < tamanhoDaPalavra; indice++)
        {
            cout << palavra[indice];
        }
        cout << "\n\n Digite uma letra -> ";
        cin >> letra[0];
        for (indice = 0; indice < tamanhoDaPalavra; indice++)
        {
            if (palavraSecreta[indice] == letra[0])
            {
                acerto = true;
                palavra[indice] = palavraSecreta[indice];
                acertos++;
            }
        }
        if (!acerto)
        {
            chances--;
        }
        acerto = false;
        system("cls");
    }

	if (acertos == tamanhoDaPalavra)
	{
		cout << "Palavra Correta";
	}
	else
	{
		cout << "Acabou suas chances! Voce nao acertou a palavra";
	}

    system("pause>0");
}

