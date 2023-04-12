#include<iostream>
using namespace std;

/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo,
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário 
e calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de
aumento. Mostre o salário antigo, o novo salário e a diferença.
CÓDIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%
*/

int main(){
	
	int codigo;
	float salario;
	
	cout << "Informe qual seu codigo na empresa : ";
	cin >> codigo;
	cout << "\n\nInforme qual o salario que voce ganha atualmente : ";
	cin >> salario;
	
	switch(codigo){
		case 101: cout << "\n\nVoce recebeu um AUMENTO de " << salario*0.10 << " reais!!!";
				   cout << "\nSeu novo salario e " << salario*0.10+salario << " reais";
				   cout << "\nSeu antigo salario era de " << salario << " reais\n\n";
		break;
		case 102: cout << "\n\nVoce recebeu um AUMENTO de " << salario*0.20 << " reais!!!";
					cout << "\nSeu novo salario e " << salario*0.20+salario << " reais";
					cout << "\nSeu antigo salario era de " << salario << " reais\n\n";
		break;
		case 103: cout << "\n\nVoce recebeu um AUMENTO de " << salario*0.30<< " reais!!!";
					cout << "\nSeu novo salario e " << salario*0.30+salario << " reais";
					cout << "\nSeu antigo salario era de " << salario << " reais\n\n";
		break;
		default: cout << "\n\nVoce recebeu um AUMENTO de " << salario*0.40 << " reais!!!";
					cout << "\nSeu novo salario e " << salario*0.40+salario << " reais";
					cout << "\nSeu antigo salario era de " << salario << " reais\n\n";
	}
	
	system ("pause");
}
