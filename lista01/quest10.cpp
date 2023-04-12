#include<iostream>
using namespace std;

/*Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, 
subtração, multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. 
Em seguida leia dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), 
conjunção (E) e disjunção (OU), apresentando ao final os resultados obtidos. */

int main(){
	
	int a, b;
	
	cout << "Digite dois valores inteiros, sendo `a` e `b` respectivamente: ";
	cin >> a >> b;
	
	cout << "\nSoma = " << a+b << "\nSubtracao = " << a-b << "\nMultiplicacao = " << a*b << "\nDivisao = " << a/b;
	
	bool c, d;
	
	cout << " \n\nDigite dois valores logicos, sendo `c` e `d` respectivamente: ";
	cin >> c >> d;
	
	cout << "\n\nResultados sendo c e d, respectivamente";
	cout << "\nNegacao = " << !c << " " << !d;
	cout << "\nConjuncao = " << (c && d);
	cout << "\nDisjuncao = " << (c || d) << endl;
	
	system("pause");
}
