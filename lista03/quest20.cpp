#include<iostream>
using namespace std;

/*
Elabore um algoritmo leia várias vezes dois números inteiros quaisquer, multiplique-os sem 
utilizar a operação de multiplicação e escreva o resultado. O algoritmo deve parar quando os 
dois números digitados forem um positivo e o outro negativo (não necessariamente nesta ordem). 
Por exemplo: 4 * 2 = 4 + 4.
*/

int main(){

	int soma=0, num, mult, cont;
	
	cout << "Se os valores do fator for positivo e do multiplicador negativo ou vice-versa" 
	<< "o codigo acaba\n";
	
	do{
		cout << "\nDigite o primeiro fator: ";
		cin >> num;
		cout << "\nDigite o numero multiplicador: ";
		cin >> mult;
		for(cont=0; cont<mult; cont++){
			soma += num;
		}
		
		if(num>0 && mult>0 || num<0 && mult<0){
			cout << "\n\t" << num << "x" << mult << "= " << soma << "\n";
		}
	}while(num>0 && mult>0 || num<0 && mult<0);

	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");

}
