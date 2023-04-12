#include<iostream>
using namespace std;

/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.*/

int main(){
	
	int numero;
	
	cout << "Digite o numero que desejar: ";
	cin >> numero;
	
	if(numero%2==0){
		cout << "\n\nESTE NUMERO E PAR!!";
		if(numero>100){
			cout << "\nESTE NUMERO TAMBEM E MAIOR QUE 100!!\n\n";
		}else{
			cout << "\nEste numero nao e maior que 100!\n\n";
		}
	}else{
		cout << "\n\nESTE NUMERO E IMPAR!!";
		if(numero>0){
			cout << "\nESTE NUMERO E +POSITIVO!\n\n";
		}else{
			cout << "\nESTE NUMERO E -NEGATIVO!\n\n";
		}
	}
	
	system("pause");
}
