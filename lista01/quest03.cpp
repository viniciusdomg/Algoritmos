#include<iostream>
using namespace std;

int main() {
	
	int parcelas;
	float valorPrest, valorCompra;
	
	cout << "Qual foi o preco de sua compra: ";
	cin >> valorCompra;
	cout << "\nVoce parcelou em quantas vezes? (1- a vista) ";
	cin >> parcelas;
	
	valorPrest = valorCompra/parcelas;
	
	cout << "\nSuas parcelas foram de " << valorPrest << "\n\n";
	
	system("pause");
}
