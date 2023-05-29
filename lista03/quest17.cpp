#include<iostream>
using namespace std;

/*
Elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o algoritmo deve 
ler o seu código, o valor unitário e a quantidade adquirida. Após as informações do produto, o algoritmo 
deve mostrar o subtotal da compra e perguntar se o usuário deseja continuar (S-sim, N-não). 
Caso o usuário escolha ‘S’, o algoritmo deverá pedir os dados do próximo produto. Caso escolha ‘N’, o 
algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos. Em seguida deve 
ler o valor pago e informar se está correto, existe troco ou está insuficiente.
*/

int main(){
	
	int cod, quant, prod = 0;
	float subtotal, total = 0, valorpag, valoruni;
	char escolha;
	
	do{
		cout << "\nCodigo do produto: ";
		cin >> cod;
		cout << "Quantidade do produto: ";
		cin >> quant;
		cout << "Valor unitario do produto: ";
		cin >> valoruni;
		
		subtotal = valoruni*quant;
		prod += quant;
		total+=subtotal;
		
		cout << "\nSubtotal da compra= " << subtotal << "R$";
		cout << "\n\nSe houver mais produtos digite 'S', senao digite 'N': ";
		cin >> escolha;	
			
	}while(escolha!='N');
	
	cout << "\nQuantidade de produtos= " << prod; 
	cout << "\nTotal da compra= " << total << "R$\n";
	cout << "\nInforme o valor pago pelo cliente: ";
	cin >> valorpag;
	
	if(valorpag==total){
		cout << "\nCOMPRA EFETUADA COM SUCESSO";
	}else if(valorpag>total){
		cout << "\nO troco e de " << valorpag-total << "R$";
	}else{
		cout << "\nValor pago INSUFICIENTE, efetue o que falta";
	}
	
	cout < "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
