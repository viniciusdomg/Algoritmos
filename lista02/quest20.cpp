#include<iostream>
using namespace std;

/*
Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos 
pagam R$ 100 mais um adicional conforme a seguinte tabela:
• Crianças com menos de 10 anos pagam R$80;
• Conveniados com idade entre 10 e 30 anos pagam R$50;
• Conveniados com idade entre 31 e 60 anos pagam R$ 95;
• Conveniados com mais de 60 anos pagam R$130.
*/

int main(){
	
	int idade;
	
	cout << "Digite sua idade para saber o acrescimo do plano de saude: ";
	cin >> idade;
	
	if(idade<10 && idade>0){
		cout << "\n\n Valor a ser pago e de " << 100+80 << "R$\n\n";
	}else if (idade>=10 && idade <=30){
		cout << "\n\n Valor a ser pago e de " << 100+50 << "R$\n\n";
	}else if(idade>=31 && idade<=60){
		cout << "\n\n Valor a ser pago e de " << 100+95 << "R$\n\n";
	}else if(idade>60){
		cout << "\n\n Valor a ser pago e de " << 100+130 << "R$\n\n";
	}else{
		cout << "\n\nDigite uma idade que seja valida\n\n";
	}
	
	system("pause");
}
