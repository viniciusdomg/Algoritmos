#include<iostream>
using namespace std;

/*
Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago.
*/

int main(){
	
	float precoCar, imposto;
	int ano;
	
	cout << "Informe qual o preco que voce pagou no carro : ";
	cin >> precoCar;
	cout << "Informe qual o ano de fabricacao do carro que voce comprou : ";
	cin >> ano;
	
	//Os carros passaram a existe a partir de 1886, porem a questao nao pede isto
	//Ano 0 ou anos menores que 0 nao existem
	if(ano>0 && ano<1990){
		imposto = (precoCar*0.01+precoCar)-precoCar;
		cout << "\n\nO imposto que voce devera pagar a mais pelo carro e de " << imposto << " reais\n\n";
	}else{
		if(ano>=1990){
			imposto = (precoCar*0.015+precoCar)-precoCar;
			cout << "\n\nO imposto que voce devera pagar a mais pelo carro e de " << imposto << " reais\n\n";
		}else{
			cout << "\nO ano que voce digitou foi invalido!!\n\n";
		}
	}
	system("pause");	
}
