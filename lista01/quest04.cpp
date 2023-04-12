#include<iostream>
using namespace std;

int main (){
	
	int numero;
	float percentual;
	
	cout << "Digite um numero inteiro a qual voce deseja aplicar um percentual: ";
	cin >> numero;
	cout << "\nQual o percentual que deseja aplicar sobre esse numero: ";
	cin >> percentual;
	
	cout << "\n\nEsse e o percentual sobre o numero = " << numero*(percentual/100) << "\n\n";
	
	system("pause");
}
