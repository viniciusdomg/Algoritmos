#include<iostream>
using namespace std;

/*
Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio 
e calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de
aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a.
C�DIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 T�cnico 30%
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
