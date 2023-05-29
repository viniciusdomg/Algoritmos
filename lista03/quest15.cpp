#include<iostream>
using namespace std;

/*
Uma loja tem, para cada um dos seus 10 funcion�rios, uma ficha contendo a identidade, o n�mero 
de horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que: 

a) A empresa paga 12 reais por hora e 40 reais por dependentes (sal�rio bruto).
b) Sobre o sal�rio bruto s�o feitos descontos de 8,5% para o INSS e 5% para o IR (sal�rio l�quido). 

Elabore um algoritmo que leia os dados de todos os funcion�rios, calcule e escreva os sal�rios bruto 
(total) e l�quido (total � descontos) de cada funcion�rio e a identidade de todos os funcion�rios 
com mais de 3 dependentes.
*/

int main(){
	
	int ident, horatrab, dep, i;
	float salario;
	
	for(i=0; i<10; i++){	
		cout << "\nDigite a identidade do " << i+1 << "o funcionario: ";
		cin >> ident;
		cout << "\nDigite quantas horas trabalhadas tem esse funcionario: ";
		cin >> horatrab;
		cout << "\nDigite a quantidade de dependentes que o funcionario possui: ";
		cin >> dep;	
		
		salario = (horatrab*12 + 40*dep);
		
		cout << "\n\nSalario Bruto= " << salario << "R$\nSalario Liquido= " 
		<< (salario-(salario*0.085))-(salario*0.05) << "R$\n";
		
		if(dep>3){
			cout << "O funcionario da identidade " << ident << " possui mais de 3 dependentes :)\n";
		}
	}
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
