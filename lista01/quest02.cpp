#include<iostream>
using namespace std;

int main() {
	
	int ano, qtdCigarros, qtdCigarrosCart;
	float precoCart, dinheiro;
	
	cout << "Digite ha quantos anos voce fuma: ";
	cin >> ano;
	cout << "\nQual a quantidade de cigarros que voce fuma por dia: ";
	cin >> qtdCigarros;
	cout << "\nQuanto custa a carteira que voce compra: ";
	cin >> precoCart;
	cout << "\nQuantos cigarros vem na carteira? ";
	cin >> qtdCigarrosCart;
	
	dinheiro = (ano*365)*(qtdCigarros*(precoCart/qtdCigarrosCart));
	
	cout << "\nVoce gastou " << dinheiro << " em seus anos de fumo!\n\n";
	
	system("pause");
}
