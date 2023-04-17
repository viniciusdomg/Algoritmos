#include<iostream>
using namespace std;

/*Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos 
por um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo:

CONSUMO (Km/l)        MENSAGEM
Menor que 8        Venda o carro!
Entre 8 e 12         Econômico!
Maior que 12      Super econômico!
*/

int main(){

	float distancia, litros, consumo;
	
	cout << "Quantos Kilometros voce percorreu com o carro? ";
	cin >> distancia;
	cout << "\nDigite quantos litros de gasolina gastou : ";
	cin >>  litros;
	
	consumo = distancia/litros;
	
	if((consumo<8)&&(consumo>0)){
		cout << "\nVenda o carro!\n\n";
	}else if((consumo>=8)&&(consumo<=12)){
		cout << "\nEconômico!\n\n";
	}else if(consumo>12){
		cout << "\nSuper econômico!\n\n";
	}else{
		cout << "\nHouve uma incoerencia nos dados :(\n\n";
	}
	
	system("pause");
}
