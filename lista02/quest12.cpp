#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
*/

int main(){
	
	int idade, trabalho;
	
	cout <<  "Digite quantos anos voce tem : ";
	cin >> idade;
	cout << "Digite a quanto tempo voce trabalha : ";
	cin >> trabalho;
	
	if(trabalho>=30){
		cout << "\nPode se APOSENTAR!" << endl;
	}else if(idade>=65){
		cout << "\nPODE se aposentar!" << endl;
	}else if ((idade>=60)&&(trabalho>=25)){
		cout << "\nPODE se APOSENTAR!" << endl;
	}else{
		cout << "\nVoce ainda NAO tem IDADE nem TEMPO DE SERVICO para se APOSENTAR!\n";
	}
	
	system("pause");
}
