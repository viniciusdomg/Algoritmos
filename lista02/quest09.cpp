#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e
escreva-os na ordem solicitada.
*/

int main(){
	
	int n1, n2, n3, aux;
	char ordem;
	
	cout << "Digite os numeros inteiros na sequencia, respectivamente: ";
	cin >> n1 >> n2 >> n3;
	
	cout << "\nDigite em qual ordem deseja colocar os numeros (c-crescente, d-decrescente): ";
	cin >> ordem;
	
	while((n2<n1)||(n3<n2)){
	
		if(n2<n1){
			aux = n2;
			n2=n1;
			n1=aux;
		}
		if(n3<n2){
			aux = n3;
			n3 = n2;
			n2 = aux;
		}
	}
	if(ordem=='c'){
		cout << "\n\nNumeros : " << n1 << " " << n2 << " " << n3 << endl;
	}else if(ordem=='d'){
		cout << "\n\nNumeros: " << n3 << " " << n2 << " " << n1 << endl;
	}else{
		cout << "\n\n A ORDEM QUE VOCE DIGITOU E INVALIDA!\n\n";
	}
	
	
	system("pause");
}
