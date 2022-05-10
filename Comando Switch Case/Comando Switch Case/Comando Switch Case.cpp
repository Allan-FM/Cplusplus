#include <iostream>
using namespace std;
int main()
{
	int valor;
// 	cout << "Digite o numero da cor que voce deseja: \n";
// 	cout << "[1] = Verde, [2] = Azul, [3] = Vermelho \n";
// 	cin >> valor;
// 
// 	switch (valor)
// 	{
// 		case 1:
// 			cout << "Cor selecionada = Verde";
// 			break;
// 		case  2:
// 			cout << "Cor selecionada = Azul";
// 			break;
// 		case 3:
// 			cout << "Cor selecionada = Vermelho";
// 			break;
// 	default:
		//cout << "Valor invalido!";
		//break;
// 	}
// 	cout << "Digite o numero da cor que voce deseja: \n";
// 	cout << "[1.2,3] = Verde, [4,5,6] = Azul\n";
// 	cin >> valor;
// 
// 	switch (valor)
// 	{
// 	case 1:
// 	case 2:
// 	case 3:
// 		cout << "Cor selecionada = Verde";
// 		break;
// 	case 4:
// 	case 5:
// 	case 6:
// 		cout << "Cor selecionada = Azul";
// 		break;
// 	default:
		//cout << "Valor invalido!";
		//break;
// 	}

	cout << "Digite o numero da cor que voce deseja: \n";
	cout << "[1] = Carro, [2] = Moto, [3] = Aviao, [4] = Helicoptero\n";
	cin >> valor;

	switch (valor)
	{
	case 1:
	case 2:
		cout << "Veiculo Terrestre: \n";
		switch (valor)
		{
			case  1:
				cout << "Carro selecionado!";
				break;
			case 2:
				cout << "Moto Selecionada!";
				break;
		}
		break;
	case 3:
	case 4:
		cout << "Veiculo Aereo: \n";
		switch (valor)
		{
		case  3:
			cout << "Aviao selecionado!";
			break;
		case 4:
			cout << "Helicoptero Selecionada!";
			break;
		}
		break;
	default:
		cout << "Valor invalido!";
		break;
	}
   system("pause>0");
}


