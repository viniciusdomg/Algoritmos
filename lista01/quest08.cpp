#include<iostream>
using namespace std;

int main(){
	
	float reais, dolar, qtdDolar;
	
	cout << "Qual a cotacao na sua epoca (quanto vale 1 real em dolar): ";
	cin >> dolar;
	cout << "\nDigite quanto dolares quer converter em reais: ";
	cin >> qtdDolar;
	
	reais = dolar*qtdDolar;
	
	cout << "\n\nSeu valor em reais e = " << reais << "\n\n";
	
	system("pause");
}
