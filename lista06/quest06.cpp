#include<iostream>
#include<string>
using namespace std;

/*
Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome,
número de horas trabalhadas e o número de dependentes. Considerando que:
- A empresa paga 12 reais por hora e 40 reais por dependentes;
- Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR.
Elabore um algoritmo que declare o registro do funcionário, e leia seus dados enquanto o
usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). Após a
leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto e
qual o salário líquido de cada um dos funcionários que foram cadastrados.
*/

struct tEmpresa{
	string nome;
	int horas;
	int dependentes;
	float salarioLiq;
};
int main(){

	tEmpresa funcionario[200];
	int i, cont=0, opcao;
	
	cout << "----CADASTRO----";
	do{
		cout << "\n\nDigite o nome do funcionario: ";
		getline(cin, funcionario[cont].nome);
		cout << "\nQuantidade de horas trabalhadas no mes: ";
		cin >> funcionario[cont].horas;
		cout << "\nQuantidade de dependentes: ";
		cin >> funcionario[cont].dependentes;
		funcionario[cont].salarioLiq = (funcionario[cont].horas*12)+(funcionario[cont].dependentes*40);
		
		cont++;
		cout << "\n\nDeseja cadastrar outro funcionario? (1-sim, 2-nao)\n>> ";
		cin >> opcao;
		getchar();
	}while(opcao!=2 && cont<200);
	
	system("cls");
	cout << "----FUNCIONARIOS----";
	for(i=0;i<cont; i++){
		cout << "\n\nNome: " << funcionario[i].nome;
		cout << "\nSalario bruto = " << funcionario[i].salarioLiq-((funcionario[i].salarioLiq*0.085)+(funcionario[i].salarioLiq*0.05));
		cout << "\nSalario liquido = " << funcionario[i].salarioLiq;
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
