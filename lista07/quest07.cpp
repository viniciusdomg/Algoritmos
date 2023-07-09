#include<iostream>
using namespace std;

/*
Escreva uma função chamada Troca que troque os valores dos parâmetros
recebidos. Essa função não deve ter retorno.
*/

void Troca(int *valor1, int *valor2);

int main(){
	
	int valor1, valor2;
	
	cout << "\n\nDigite o primeiro valor: ";
	cin >> valor1;
	cout << "\nDigite o segundo valor: ";
	cin >> valor2;
	
	Troca(&valor1, &valor2);
	
	cout << "\n\nO primeiro valor agora e: " << valor1;
	cout << "\nO segundo valor agora e: " << valor2;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

void Troca(int *valor1, int *valor2){
	int aux;
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
}
