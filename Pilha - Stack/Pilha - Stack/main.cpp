#include <iostream>
#include <stack>

using namespace std;

int main()
{
    //.push(); -> Adiciona
    //.pop(); -> Remove
    //.top(); -> Mostra o que esta no topo
    //.empty(); -> Se a pilha estiver vazia retorna true
    //.size(); -> tamanho da pilha
    stack<string> cards;

    if (cards.empty())
    {
        cout << "Pilha vazia \n\n";
    }
    else
    {
        cout << "Pilha com cartas \n\n";
    }

    cards.push("Rei");
    cards.push("Copa");
    cards.push("Dama");
    cards.push("As");

    while (!cards.empty())
    {
        cards.pop();
    }
    cout << "Tamanho da pilha: " << cards.size() << "\n";

    cout << "Carta do topo: " << cards.top() << "\n";

    cards.pop();

    cout << "Nova carta do topo: " << cards.top() << "\n";
    cout << "Tamanho da pilha: " << cards.size() << "\n";

    if (cards.empty())
    {
        cout << "\n\nPilha vazia";
    }
    else
    {
        cout << "\n\nPilha com cartas";
    }
}