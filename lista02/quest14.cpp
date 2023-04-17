#include<iostream>
using namespace std;

/*
Leia 3 números inteiros e escreva uma das seguintes mensagens:
• Todos os números são iguais;
• Todos os números são diferentes;
• Apenas dois números são iguais.
*/

int main(){
	
	int n1, n2, n3;
	
	cout << "Digite tres numeros inteiros : ";
	cin >> n1 >> n2 >> n2;
	
	if((n1==n2)&&(n2==n3)){
		cout << "\nTODOS OS NUMEROS SAO IGUAIS\n\n";
	}else if((n1!=n2)&&(n2!=n3)&&(n3!=n1)){
		cout << "\nTODOS OS NUMEROS SAO DIFERENTES\n\n";
	}else{
		cout << "\nAPENAS DOIS NUMEROS SAO IGUAIS!!\n\n";
	}
	
	system("pause");
}
