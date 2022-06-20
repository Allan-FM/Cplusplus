#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> cartas;
    string nomeDaCarta;
    string nomeDaCarta2;
    string nomeDaCarta3;
    cout << "Digite qual carta do baralho voce deseja inserir -> ";
    cin >> nomeDaCarta;
    cartas.push(nomeDaCarta);
    cout << "Digite qual carta do baralho voce deseja inserir  -> ";
    cin >> nomeDaCarta2;
    cartas.push(nomeDaCarta2);
    cout << "Digite qual carta do baralho voce deseja inserir  -> ";
    cin >> nomeDaCarta3;
    cartas.push(nomeDaCarta3);

    cout << "Tamanho da fila -> " << cartas.size() << "\n";
    cout << "Primeira carta -> " << cartas.front() << "\n";
    cout << "Ultima carta -> " << cartas.back() << "\n";

    while (!cartas.empty())
    {
        cout << "Primeira carta -> " << cartas.front() << "\n";
        cartas.pop();
    }   
    

}