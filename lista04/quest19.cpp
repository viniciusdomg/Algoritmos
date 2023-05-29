#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor de 6 elementos inteiros representando o conjunto de números
sorteados na mega sena. Leia, a seguir, para cada um dos N apostadores, um vetor contendo os 6 números
da sua aposta. Verifique para cada apostador o seu número total de acertos na mega sena (para cada número
correto, o apostador ganha 1 acerto) e escrever se ele “não ganhou”, “ganhou a quadra”, “ganhou a quina”
ou “ganhou a mega”. O algoritmo deverá finalizar quando o usuário desejar.
*/

int main(){
	
	int mega[6], apostador[6], i, aposta, cont;
	bool teste=true;
	char escolha;
	
	cout << "Digite os 6 numeros da mega-sena dessa vez: ";
	for(i=0; i<6; i++){
		cin >> mega[i];
	}
	cout << "\nOs resultados serao informados de jogador por jogador\n";
	do{
		aposta=0;
		for(i=0; i<6; i++){
			apostador[i]=0;
		}
		for(i=0; i<6; i++){	
			cout << "\nO " << i+1 << "o numero da aposta do jogador: ";
			cin >> apostador[i];
			for(cont=0; cont<6; cont++){
				if(cont==i){
					cont++;
				}
				if(apostador[cont]==apostador[i]){
					teste=false;
				}
			}
			if(teste==true){
				for(cont=0; cont<6; cont++){
					if(apostador[i]==mega[cont]){
						aposta++;
					}
				}
			}
			teste=true;
		}
		if(aposta==4){
			cout << "\nParabens voce ganhou a quadra!!!\n";
		}else if(aposta==5){
			cout << "\nParabens voce ganha a quinta!!!!!!!\n";
		}else if(aposta==6){
			cout << "\nParabens voce ganhou a MEGA-SENA!!!";
		}else{
			cout << "\nVoce nao ganhou nada este ano :(";
		}
		cout << "\n\nTem mais alguem para colocar os numeros da aposta(s-sim, n-nao)? ";
		cin >> escolha;
	}while(escolha!='n');
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
