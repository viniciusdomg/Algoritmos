#include<iostream>
using namespace std;

/*Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se �
maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo.*/

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
