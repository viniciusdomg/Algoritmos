#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor V de 10 posi��es de inteiros, n�o permitindo que sejam 
digitados n�meros negativos. Em seguida, leia um n�mero inteiro qualquer e verifique se o n�mero 
existe no vetor. Se existir, informe o seu �ndice. Se n�o existir, informe a mensagem �N�mero n�o 
localizado!�.
*/

int main(){
	
	int v[10], i, num;
	bool flag=true, condicion=true;
	
	cout << "Digite todos os elementos do vetor em sequencia: ";
	for(i=0;i<10;i++){
		do{
			if(flag==false){
				cout << "\nDigite um numero positivo! ";
			}
			cin >> v[i];
			flag=false;
		}while(v[i]<0);
		flag=true;
	}
	cout << "\nDigite um numero inteiro qualquer para verificar se tem dentro do vetor: ";
	cin >> num;
	
	for(i=0;i<10;i++){
		if(num==v[i]){
			cout << "\n\tIndice: " << i << " \n\tPosicao do vetor: " << i+1;
			condicion=false;
		}
	}
	if(condicion==true){
		cout << "\n\tNumero nao localizado";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
